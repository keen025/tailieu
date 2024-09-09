#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double x, factorial=1, s, s1=0, s2=0;
	printf("nhap gia tri n: ");
	scanf("%d", &n);
	printf("nhap gia tri x: ");
	scanf("%lf", &x);
	
	for(int i=1; i<=n; i++){
		s1 += pow(x, i);
		factorial *= i;
		s2 += factorial;
	}
	s = s1/s2;
	printf("S= %.11lf", s);
	return 0;
}
