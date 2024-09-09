#include<stdio.h>


int main(){
	int n, p=1, s=0;
	printf("nhap gia tri n: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		p *= i;
		s += p;
	}
	printf("S(%d)= %d", n, s);
	return 0;
}
