#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	char text[50];
	fgets(text,sizeof(text),stdin);
	text[strlen(text)-1]='\0';
    FILE *f = fopen(text, "r");
    if (f == NULL) {
        printf("file not found\n");
        return 0;
    }
	int m,n;
	fscanf(f,"%d%d",&m,&n);
	int a[m][n];
	int max=-1e9;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			fscanf(f,"%d",&a[i][j]);
			if(a[i][j]<0)
				max=fmax(max,a[i][j]);
		}
	}
	printf("phan tu co gia tri am lon nhat la %d\n",max);
	
	for(int j=0;j<n;j++)
	{
		int max=-1e9;
		for(int i=0;i<m;i++)
		{
			max=fmax(max,a[i][j]);
		}
		printf("gia tri lon nhat cua cot %d la %d\n",j+1,max);
	}
	for(int i=0;i<m;i++)
	{
		int sum=0;
		for(int j=0;j<n;j++)
		{
			sum+=a[i][j];
		}
		printf("tong cac phan tu cua hang %d la %d\n",i+1,sum);
	}
    fclose(f);
    return 0;
}

