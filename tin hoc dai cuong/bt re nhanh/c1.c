#include<stdio.h>

int main(){
	int a, b;
	printf("nhap vao 2 so nguyen a va b: ");
	scanf("%d %d", &a, &b);
	
	if(a%b == 0){
		printf("a chia het cho b\n");
	}else{
		printf("a khong chia het cho b\n");
		
	}
	if(a%2 == 0){
		printf("a la so chan\n");
	}else{
		printf("a khong la so chan\n");
	}
	return 0;
}
