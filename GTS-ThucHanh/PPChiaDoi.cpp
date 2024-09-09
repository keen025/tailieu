#include<bits/stdc++.h>
using namespace std;

//typedef double ham(double);

double f(double x)
{
	return pow(x,5)-x-1.0/5;
}

double chiadoi(double a,double b, double eps)
{
	while (b-a>eps)
	{
	double c=(a+b)/2;
	if (f(c)==0) return c;
	if (f(a)*f(c)<0) b=c; else a=c; 	
	}
	return a;
}

int main()
{
	double a,b,ss;
	printf("Nhap doan phan ly nghiem a,b = ");
	scanf("%lf%lf",&a,&b);
	//printf("%lf,%lf",a,b);
	printf("\nNhap sai so: ");
	scanf("%lf",&ss);	
	printf("Nghiem gan dung la: %.4lf",chiadoi(a,b,ss));
}

