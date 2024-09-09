#include <stdio.h>

int main(){
	int n;
	printf("nhap so nguyen duong N: ");
	scanf("%d", &n);
	
	if(n < 2){
		printf("%d khong phai la so nguyen to.", n);
	}else {
		int mark = 1;
		for(int i =2; i <= n-1; i++){
			if(n%i ==0){
			mark = 0;
			break;
			}
			
		}
		if(mark == 0){
			printf("%d khong phai la so nguyen to.\n", n);
		}else{
			printf("%d la so nguyen to.\n", n);
		}
	}
	
	
	return 0;
}
