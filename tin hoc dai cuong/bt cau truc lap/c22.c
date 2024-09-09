#include <stdio.h>

int main(){
	int n;
	printf("nhap N trong khoang 1 den 9: ");
	scanf("%d", &n);
	if(n>=1 && n<=9){
		for(int i=1; i<=9; i++){
			printf("%d x %d = %d\n", n, i, n*i);
		}
		
	}else{
		printf("yeu cau nhap lai");
	}
}
