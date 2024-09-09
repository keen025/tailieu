#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	printf("gia tri 3 so nguyen lan luot la: ");
	scanf("%d %d %d", &a, &b, &c);
	
	int trung_binh_cong = (a+b+c) / 3;
	float trung_binh_nhan = cbrt(a*b*c);
	
	printf("Gia tri trung binh cong la: %d\n", trung_binh_cong);
    printf("Gia tri trung binh nhan la: %f\n", trung_binh_nhan);

    return 0;
}
