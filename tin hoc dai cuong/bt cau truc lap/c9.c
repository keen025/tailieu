#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double x, s=2018;
	printf("nhap gia tri n: ");
	scanf("%d", &n);
	printf("nhap gia tri x: ");
	scanf("%lf", &x);
	
	for(int i=1; i<=n; i++){
		s += (pow(x, i)+i) / (2*i);
	}
	printf("S= %lf", s);
	return 0;
}
