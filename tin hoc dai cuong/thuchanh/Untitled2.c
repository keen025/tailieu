#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int f1 = 0, f2 = 1, f;
    
    while(f2 <= b) {
        f = f1 + f2;
        f1 = f2; 
        f2 = f;
        
        if(f > a && f < b) {
            printf("%d ", f); 
        }
    }
    
    return 0;
}
