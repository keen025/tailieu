#include<stdio.h>

int main(){
	int n;
	float x;
	float s=0;
	printf("nhap gia tri n: ");
	scanf("%d", &n);
	printf("nhap gia tri x: ");
	scanf("%f", &x);
	
	for(int i=1; i<=n; i++){
		s += pow(x, i);
	}
	printf("S= %f", s);
	return 0;
}
