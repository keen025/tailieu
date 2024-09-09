#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct sv{
	char ten[50];
	int diem;	
}sv;

int main()
{
	FILE *f=fopen("input.txt","r");
	if(f==NULL){
		printf("can not open file");
		return 0;
	}
	int n;
	fscanf(f,"%d",&n);
	getchar();
	sv a[n];
	for(int i=0;i<n;i++)
	{
		fgets(a[i].ten,sizeof(a[i].ten),f);
		a[i].ten[strlen(a[i].ten)-1]='\0';
		fscanf(f,"%d",&a[i].diem);
		getchar();
	}
	
	
	
	fclose(f);
	return 0;
}
