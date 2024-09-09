#include<stdio.h>

int main(){
	int year;
	printf("nhap vao nam: ");
	scanf("%d", &year);
	
	if(year%400 ==0 || (year %4 ==0 && year %100 !=0)){
		printf("nam nhuan");
	}else{
		printf("khong phai nam nhuan");
	}
	return 0;
}
