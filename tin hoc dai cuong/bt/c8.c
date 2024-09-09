#include <stdio.h>
#include <math.h>

int main() {
	double x, S;
	printf("nhap so thuc x: ");
	scanf("%lf", &x);
	
	S = x - (pow(x, 3)/(2*3)) + (pow(x, 5)/(2*3*4*5));
	
	printf("gia tri cua S la: %lf", S);
	
    return 0;
}
