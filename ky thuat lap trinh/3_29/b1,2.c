#include<stdio.h>
int ucln(int a, int b){
	while(b){
		int r=a%b;
		a=b;
	}
	return a;
}
int bcnn(int a, int b){
	return a*b/ucln(a,b);
}
int main()
{
	int n; scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",a+i);
	int gcd= a[0],lcm = a[0];
	for(int i=0;i<n;i++){
		gcd = ucln(gcd,a[i]);
		lcm = bcnn(lcm,a[i]);
	}
	printf("%d\n%d",gcd,lcm);
	return 0;
}
