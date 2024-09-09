#include <stdio.h>

int main() {
	float x1, y1, x2, y2, x3, y3, x4, y4;
	printf("Nhap toa do diem 1 (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    
    printf("Nhap toa do diem 2 (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    
    printf("Nhap toa do diem 3 (x3, y3): ");
    scanf("%f %f", &x3, &y3);
    
    printf("Nhap toa do diem 4 (x4, y4): ");
    scanf("%f %f", &x4, &y4);

    printf("Cac diem nam trong goc phan tu thu 2 la:\n");
    
    if (x1 < 0 && y1 > 0) {
        printf("(%.1f, %.1f); ", x1, y1);
    }

    if (x2 < 0 && y2 > 0) {
        printf("(%.1f, %.1f); ", x2, y2);
    }

    if (x3 < 0 && y3 > 0) {
        printf("(%.1f, %.1f); ", x3, y3);
    }

    if (x4 < 0 && y4 > 0) {
        printf("(%.1f, %.1f); ", x4, y4);
    }
	
    return 0;
}
