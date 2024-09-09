#include <stdio.h>

int main() {
    int x;
    printf("Nhap so nguyen duong x: ");
    scanf("%d", &x);

    int sum = 0;

    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            sum += i;
        }
    }

    if (sum == x) {
        printf("%d la so hoan thien.\n", x);
    } else {
        printf("%d khong la so hoan thien.\n", x);
    }

    return 0;
}

