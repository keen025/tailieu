#include <stdio.h>
#include <math.h>

int main() {
	double x, y1, y2, p = 3.14, e = 2.78;
	printf("nhap so thuc x: ");
	scanf("%lf", &x);
	
	y1 = 4*(x*x + 10*x*sqrt(x) + 3*x + 1);
	y2 = (sin(p*x*x) + sqrt(x*x + 1)) / (pow(e, 2*x) + cos((p/4)*x));
	
	printf("y1 = %lf\n", y1);
	printf("y2 = %lf\n", y2);
	
	
    
    return 0;
}
