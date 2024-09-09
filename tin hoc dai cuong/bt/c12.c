#include <stdio.h>
#include <math.h>
int main() {
	float x1, y1, x2, y2;
	printf("Nhap toa do diem thu nhat: ");
    scanf("%f %f", &x1, &y1);
    printf("Nhap toa do diem thu hai: ");
    scanf("%f %f", &x2, &y2);
	
	float chieu_dai = abs(x1-x2);
	float chieu_rong = abs(y1-y2);
	
	printf("dien tich hcn co 2 dinh doi dien la 2 diem vua nhap la: %f", chieu_dai*chieu_rong);
    return 0;
}
