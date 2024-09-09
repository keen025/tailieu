#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct ts{
	char hoten[50];
	int diem;
	char dh[10];
}ts;
int main() {
    FILE *f = fopen("input.txt", "r");
    if (f == NULL) {
        printf("file not found\n");
        return 0;
    }
	int n;
	fscanf(f,"%d\n",&n);
	
	ts a[n];
	
	int sum1=0,sum2=0,sum3=0,sum4=0;
	for(int i=0;i<n;i++)
	{
		fgets(a[i].hoten,sizeof(a[i].hoten),f);
		a[i].hoten[strlen(a[i].hoten)-1]='\0';
		fscanf(f,"%d\n",&a[i].diem);
		fgets(a[i].dh,sizeof(a[i].dh),f);
		a[i].dh[strlen(a[i].dh)-1]='\0';
			
		if(strcmp(a[i].dh,"A")==0) sum1+=a[i].diem;
		else if(strcmp(a[i].dh,"B")==0) sum2+=a[i].diem;
		else if(strcmp(a[i].dh,"C")==0) sum3+=a[i].diem;
		else sum4+=a[i].diem;
	}
	int max=fmax(fmax(sum1,sum2),fmax(sum3,sum4));
	if(max==sum1) printf("truong co tong so diem cao nhat la %c\n",'A');
	else if(max==sum2) printf("truong co tong so diem cao nhat la %c\n",'B');
	else if(max==sum3) printf("truong co tong so diem cao nhat la %c\n",'C');
	else printf("truong co tong so diem cao nhat la %c\n",'D');
	fclose(f);
	printf("nhap ten thi sinh:\n");
	char name[50];
	gets(name);
	f = fopen("output.txt", "w");
	int check=1;
	for(int i=0;i<n;i++)
	{
		if(strcmp(a[i].hoten,name)==0){
			fprintf(f,"%s %d %s",a[i].hoten,a[i].diem,a[i].dh);
			check=0;
		}
	}
	if(check) fprintf(f,"ko tim thay\n");
    fclose(f);
    return 0;
}

