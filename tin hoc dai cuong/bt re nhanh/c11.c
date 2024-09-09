#include <stdio.h>
#include <math.h>
int main() {
	float xA, yA, R, xO=0, yO=0;
	printf("nhap toa do diem A: ");
	scanf("%f %f", &xA, &yA);
	printf("nhap ban kinh R: ");
	scanf("%f", &R);
	
	float khoang_cach= sqrt(pow((xA-xO), 2) + pow((yA-yO), 2));
	
	if (khoang_cach <= R){
		printf("diem A nam trong duong tron tam O ban kinh R\n");
	} else if (khoang_cach > R){
		printf("diem A nam ngoai duong tron tam O ban kinh R\n");
	}
    return 0;
}

