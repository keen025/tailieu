#include<bits/stdc++.h>
using namespace std;
struct NTKD
{
	int n;
	float x[100], y[100];
	void nhap()
	{
		cout<<"Nhap n= "; cin>>n;
		cout<<"Nhap cac cap moc noi suy \n";
		for(int i=0;i<=n;i++)
		{
			cout<<"x["<<i<<"]="; cin>>x[i];
			cout<<"y["<<i<<"]="; cin>>y[i];
		 } 
	}
	float tinh(float a)
	{
		float P=y[0];
		float t=1;
		for (int i=1;i<=n;i++)
			{
				for (int j=0;j<=n-i;j++) y[j] = (y[j+1]-y[j])/(x[i+j]-x[j]);
				t *= a-x[i-1];
				P += y[0]*t;
			}
		return P;
	}
};
int main()
{
	NTKD N;
	N.nhap();
	float xs;
	cout<<"Nhap x* = "; cin>>xs; 
	cout<<"Gia tri gan dung cua f(x*) = "<<setprecision(4)<<N.tinh(xs); 
}

