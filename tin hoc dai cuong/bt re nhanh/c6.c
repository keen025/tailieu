#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("nhap vao so nguyen duong n: ");
	scanf("%d", &n);
	float result= sqrt(n);
	if(n>=0 && result==(int)result){
		printf("n la so chinh phuong");
	}else{
		printf("n khong phai so chinh phuong");
	}
	return 0;
}
