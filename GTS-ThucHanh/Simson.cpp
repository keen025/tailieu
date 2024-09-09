#include<stdio.h>
#include<math.h>

//typedef float ham(float);
float f(float x)
{
	return x+1;
}

float simson(float a,float b, int n)
{
	float h =(b-a)/(2*n);
	float P = f(a)+f(b);
	float x;
	for(int i=1;i<=2*n-1;i++)
		{
			x = a + i*h;
			if (i%2==0) P += 2*f(x);
			else P += 4*f(x);
		}
	return P*h/3.0;
}

main()
{
	float a,b;
	int n;
	printf("Nhap can tren va duoi a,b = ");
	scanf("%f%f",&a,&b);
	printf("Nhap n= ");
	scanf("%d",&n);
	printf("Tich phan gan dung = %.1f",simson(a,b,n));
}
