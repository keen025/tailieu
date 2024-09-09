#include<stdio.h>

int main (){
	int n;
	printf("nhap so nguyen duong n: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		if(n%i ==0 && i%2 !=0){
			printf("%d ",i);
		}
	}
	return 0;
}
