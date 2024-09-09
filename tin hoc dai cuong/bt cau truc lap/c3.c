#include<stdio.h>

int main(){
	int n, s = 0;
	printf("nhap gia tri n: ");
	scanf("%d", &n);
	
	for(int i=0 ; i <= n ; i++){
		s += 2*i +1;
	}
	printf("P(n)= %d", s);
	return 0;
}
