#include <stdio.h>
#include <math.h>
int main() {
	double a, b, r;
	printf("nhap vao ban kinh vong tron: ");
	scanf("%lf", &r);
	printf("nhap vao he so a,b cua duong thang: ");
	scanf("%lf %lf", &a, &b);
	
	double delta = pow((2*a*b), 2) - 4*(a*a +1)*(b*b - r*r);
	if(delta <0){
		printf("duong thang khong cat duong tron");
	}else if(delta==0){
		double x= -(a*b) / (a*a +1);
		double y= a*x +b;
		printf("duong thang cat duong tron tai 1 diem: (%.2lf,%.2lf)", x, y);
	}else if(delta>0){
		double x1 = (-(2 * a * b) + sqrt(delta)) / (2 * (a * a + 1));
		double y1=a*x1 +b;
		double x2 = (-(2 * a * b) - sqrt(delta)) / (2 * (a * a + 1));
		double y2=a*x2 +b;
		printf("duong thang cat duong tron tai 2 diem: (%.2lf,%.2lf) (%.2lf,%.2lf)", x1, y1, x2, y2);
	}
    return 0;
}
