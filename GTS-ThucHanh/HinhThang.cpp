#include<bits/stdc++.h>
using namespace std;

typedef float hamso(float);
float f(float x)
	{
		return pow(x,x);
	}

float hinhthang(float a, float b, int n, hamso g)
{
	float h=(b-a)/n;
	float I= g(a) + g(b);
	float x;
	for(int i=1;i<=n-1;i++) 
	{
		x = a + i*h;
		I += 2*g(x);
	}
	return I*h/2;
}
int main()
{
	float x,n,a,b,h,I;
	cout<< "Nhap a,b = "; cin>>a>>b;
	cout<< "Nhap n = "; cin>>n;
	/*h=(b-a)/n;
	I=f(a)+f(b);
	for(int i=1;i<=n-1;i++)
		{
			x=a+i*h;
			I=I+2*f(x);
		}
	*/
	cout<<"Tich phan gan dung = "<<hinhthang(a,b,n,f);
}

