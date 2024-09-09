#include<stdio.h>
#include<math.h>

int main(){
	int n, s=0;
	printf("nhap gia tri n: ");
	scanf("%d", &n);
	
	for(int i=1; i <= n; i++){
		s += pow(-1, i+1) *i;
	}
	printf("S(%d)= %d", n, s);
	return 0;
}
