#include <stdio.h>
#include <math.h>
int main() {
	double xa, ya, xb, yb;
	
	printf("Nhap toa do xa cua diem A: ");
    scanf("%lf", &xa);
    printf("Nhap toa do ya cua diem A: ");
    scanf("%lf", &ya);
    printf("Nhap toa do xb cua diem B: ");
    scanf("%lf", &xb);
    printf("Nhap toa do yb cua diem B: ");
    scanf("%lf", &yb);
    
    double khoang_cach = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));
    
    printf("Khoang cach giua hai diem A và B la: %lf\n", khoang_cach);

    return 0;
    
    
}
