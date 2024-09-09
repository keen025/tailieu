#include<stdio.h>


int main(){
	int n; 
	float s=0;
	printf("nhap gia tri n: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		s += 1.0/i;
	}
	printf("S(%d)= %f", n, s);
	return 0;
}
