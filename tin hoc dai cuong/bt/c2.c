#include<stdio.h>

int main(){
	int a, b;
	printf("nhap so nguyen a: ");
	scanf("%d", &a);
	printf("nhap so nguyen b: ");
	scanf("%d", &b);
	
	int tong = a+b;
	int hieu = a-b;
	int tich = a*b;
	float thuong = (float)a/b;
	
	printf("%d + %d = %d\n", a, b, tong);
	printf("%d - %d = %d\n", a, b, hieu);
	printf("%d x %d = %d\n", a, b, tich);
	printf("%d : %d = %.1f\n", a, b, thuong);
	
	return 0;
	
	
	
}
