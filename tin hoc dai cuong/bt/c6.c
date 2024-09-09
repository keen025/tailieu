#include<stdio.h>
#include<math.h>
int main(){
	int x, y;
	printf("nhap 2 so nguyen x va y: ");
	scanf("%d %d", &x, &y);
	double result = pow(x, y);
	printf("%d^%d = %lf\n", x, y, result);
	
	double z;
	printf("nhap so thuc z: ");
	scanf("%lf", &z);
	
	double results1 = sin(z);
	printf("sin(%lf) = %lf \n", z , results1);
	double results2 = cos(z);
	printf("cos(%lf) = %lf \n", z , results2);
	double results3 = tan(z);
	printf("tan(%lf) = %lf \n", z , results3);
	
	
    return 0;
    
}
