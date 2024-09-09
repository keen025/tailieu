#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct sach{
	char name[50];
	char tacgia[50];
	int nam;
}sach;
int cmp(const void *a,const void *b){
	sach *x=(sach*)a;
	sach *y=(sach*)b;
	return x->nam - y->nam;
}
int main() {
	char text[50];
	fgets(text,sizeof(text),stdin);
	text[strlen(text)-1]='\0';
    FILE *f = fopen(text, "r");
    if (f == NULL) {
        printf("file not found\n");
        return 0;
    }
	
	int n;
	fscanf(f,"%d\n",&n);
	
	sach a[n];
	for(int i=0;i<n;i++){
		fgets(a[i].name,sizeof(a[i].name),f);
		a[i].name[strlen(a[i].name)-1]='\0';
		fgets(a[i].tacgia,sizeof(a[i].tacgia),f);
		a[i].tacgia[strlen(a[i].tacgia)-1]='\0';
		fscanf(f,"%d\n",&a[i].nam);
	}
	char ten[]="tri thuc";
	int check=1;
	printf("thong tin sach la:\n");
	for(int i=0;i<n;i++){
		if(strcmp(ten,a[i].name)==0){
			check=0;
			printf("%s %s %d\n",a[i].name,a[i].tacgia,a[i].nam);
		}
	}
	if(check) printf("ko tim thay sach\n");
	f=fopen("sach_out.txt","w");
	qsort(a,n,sizeof(sach),cmp);
	printf("thong tin sach xb trc 2000 la:\n");
	fprintf(f,"thong tin sach xb trc 2000 la:\n");
	for(int i=0;i<n;i++){
		if(a[i].nam<2000){
			printf("%s %s %d\n",a[i].name,a[i].tacgia,a[i].nam);
			fprintf(f,"%s %s %d\n",a[i].name,a[i].tacgia,a[i].nam);
		}
	}
    fclose(f);
    return 0;
}

