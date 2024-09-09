#include <stdio.h>

int main() {
    int t1 = 1000, t2 = 2000, t3 = 5000;
    int d1, d2, d3;
    int total = 200000;

    for (d1 = 0; d1 * t1 <= total; d1++) {
        for (d2 = 0; d2 * t2 <= total; d2++) {
            for (d3 = 0; d3 * t3 <= total; d3++) {
                if (t1 * d1 + t2 * d2 + t3 * d3 == total) {
                    printf("can %d to 1000, %d to 2000, %d to 5000.\n", d1, d2, d3);
                    
                }
            }
        }
    }
    return 0;
}

