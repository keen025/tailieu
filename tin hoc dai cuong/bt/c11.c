#include <stdio.h>
#include <math.h>
int main() {
	float xM, yM, a, b, c;
	printf("nhap toa do diem M(xM,yM): ");
	scanf("%f %f", &xM, &yM);
	printf("nhap cac he so cua duong thang ax+by+c=0: ");
	scanf("%f %f %f", &a, &b, &c);
	
	float khoang_cach= abs(a*xM + b*yM + c) / sqrt(a*a + b*b);
	printf("khoang cach tu diem M den duong thang la: %f", khoang_cach);
	
    return 0;
}
