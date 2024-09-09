#include <stdio.h>

int main() {
    int n;
    long long p = 1;
    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        p *= i;
    }
    printf("%d! = %lld\n", n, p);

    return 0;
}

