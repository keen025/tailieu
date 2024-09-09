#include <stdio.h>
#include <math.h>
int main() {
	int n;
	printf("nhap so nguyen duong N: ");
	scanf("%d", &n);
	float result = sqrt(n);
	if(result == (int)result){
		printf("%d la so chinh phuong", n);
	}else{
		printf("%d khong phai la so chinh phuong", n);
	}
	
    return 0;
}

