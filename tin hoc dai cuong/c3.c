#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    int phan_nguyen = a / b;
    int phan_du = a % b;

    printf("Ket qua chia lay phan nguyen: %d\n", phan_nguyen);
    printf("Ket qua phan du: %d\n", phan_du);

    return 0;
}

