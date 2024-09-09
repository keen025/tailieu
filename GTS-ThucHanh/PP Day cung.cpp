#include<bits/stdc++.h>
using namespace std;

double f(double x){
	return x*x*x -x -1;
}

int main()
{
	double a,b,ss,x0,fu;
	scanf("%lf%lf%lf",&a,&b,&ss);
	//cin>>a>>b>>ss;
	if(f(a)>0){
		x0=b;
		fu=a;
	}
	else{
		x0=a;
		fu=b;
	}
	double x1 = x0-(f(x0)/(f(fu)-f(x0)))*(fu-x0);
	while(fabs(x1-x0)>=ss){
		x0=x1;
		x1 = x0-(f(x0)/(f(fu)-f(x0)))*(fu-x0);
	}
	//cout<<x1;
	printf("Nghiem gan dung la %.4f",x1);
	
}

