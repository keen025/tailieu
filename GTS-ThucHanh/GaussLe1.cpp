#include<stdio.h>

void nhap(float a[50][50], float b[], int *n)
{
	printf("Nhap so phuong trinh n = "); scanf("%d",n);
	printf("Nhap ma tran he so: \n");
	for (int i=1;i<=*n;i++)
		for (int j=1;j<=*n;j++)
			{
				printf("a[%d][%d]= ",i,j);
				scanf("%f",&a[i][j]);
			}
	printf("Nhap vec to ve phai b = \n");
	for (int i=1;i<=*n;i++) 
	{
		printf("b[%d] = ",i); scanf("%f",&b[i]);
	}
}

void in(float a[50][50], float b[], int n)
{
	printf("Ma tran he so A la \n");
	for (int i=1;i<=n;i++)
		{
			for (int j=1;j<=n;j++) printf("%.2f  ",a[i][j]);
			printf("\n");
		}
	printf("Vec to ve phai la: \n");
	for (int i=1;i<=n;i++) printf("%.2f \n",b[i]);
}

void khu(float a[50][50], float b[], int n)
{
	for (int k=1;k<=n;k++)
		for (int i=k+1;i<=n;i++)
			{
				if (a[k][k]==0) 
				{
					int u;
					int kt = 0;
					for (int i=k+1;i<=n;i++) 
						if (a[i][k] !=0) {u=i; kt=1; break;}
					if (kt==0) printf("PT suy thoai");
					else
					{
						for (int j=1;j<=n;j++) 
						{
							float tam = a[k][j];
							a[k][j]=a[u][j];
							a[u][j]=tam;
						}
					}
				}
				
				float p = a[i][k]/a[k][k];
				for (int j=1;j<=n;j++) a[i][j] -= p*a[k][j]; 
				b[i] = b[i] - p*b[k]; 
			//else printf("PT Suy thoai");
			}
}

void tim_nghiem(float a[50][50], float b[], int n)
{
	float x[50];
	for (int i=n;i>=1;i--)
		{
		float s=b[i];
		for (int j=i+1;j<=n;j++) s -= a[i][j]*x[j];
		if (a[i][i] !=0) x[i]= s/a[i][i];
		else printf("PT suy thoai"); 
		}
	printf("Nghiem la: \n");
	for (int i=1;i<=n;i++) printf("%f  ",x[i]);
}
main()
{
	float a[50][50],b[50];
	int n;
	nhap(a,b,&n);
	in(a,b,n);
	khu(a,b,n);
	in(a,b,n);
	tim_nghiem(a,b,n);
}

