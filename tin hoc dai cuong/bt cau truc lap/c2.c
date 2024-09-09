#include<stdio.h>

int main(){
	int n, p=1;
	printf("nhap gia tri n: ");
	scanf("%d", &n);
	for(int i =1; i <= n; i++) {
		p *= (2*i +1);
	}
	printf("P(n)= %d", p);
	return 0;
}
