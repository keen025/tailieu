#include <stdio.h>

int main() {
	float x1, y1, x2, y2;
	printf("nhap toa do diem thu 1: ");
	scanf("%f %f", &x1, &y1);
	printf("nhap toa do diem thu 2: ");
	scanf("%f %f", &x2, &y2);
	float khoang_cach = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	printf("khoang cach giua 2 diem (%f,%f) va (%f,%f) la: %.3f", x1,y1,x2,y2,khoang_cach);
	
    return 0;
}
