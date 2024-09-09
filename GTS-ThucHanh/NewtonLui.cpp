#include<stdio.h>
#include<math.h>
void nhap(int n, float x[], float y[])
{
	printf("Nhap cac bo gia tri (x,y): \n");
	for(int i=0;i<=n;i++)
	{
		printf("x[%d] = ",i);scanf("%f",&x[i]);
		printf("y[%d] = ",i);scanf("%f",&y[i]);
	}
}

void in(int n, float x[], float y[])
{
	printf("Cac bo gia tri vua nhap la: \n");
	for(int i=0;i<=n;i++) printf("(%.2f,%.2f)  ",x[i],y[i]);
}

void NewtonLui(int n, float x[], float y[], float a)
{
	float SP[50];
	float P=y[n];
	float h=x[1]-x[0];
	float t=(a-x[n])/h;
	float k=t;
	for(int i=0;i<=n-1;i++)
		SP[i]=y[i+1]-y[i];
	P += SP[n-1]*t;
	for(int i=2;i<=n;i++)
		{
			for(int j=0;j<=n-i;j++) SP[j]=SP[j+1]-SP[j];
			k *= (t+i-1)/i;
			P += SP[n-i]*k;
		}
	printf("\nGia tri f(x*) gan dung la %.2f",P);
 } 
main()
{
	int n;
	float x[50],y[50],xs;
	printf("Nhap n = "); scanf("%d",&n);
	printf("Nhap x* = "); scanf("%f",&xs);
	nhap(n,x,y);
	in(n,x,y);
	NewtonLui(n,x,y,xs);
}

