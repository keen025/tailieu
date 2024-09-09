#include<stdio.h>
int main(){
	int a, b, c, d;
	printf("nhap lan luot tu so, mau so cua phan so 1: ");
	scanf("%d %d", &a ,&b);
	printf("nhap lan luot tu so, mau so cua phan so 2: ");
	scanf("%d %d", &c ,&d);
	
	int result_num = a * d + c * b;
    int result_den = b * d;

	
	printf("%d/%d + %d/%d = %d/%d\n", a ,b ,c ,d, result_num, result_den);
    
    return 0;
    
}
