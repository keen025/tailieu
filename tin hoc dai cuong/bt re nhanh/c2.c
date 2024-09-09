#include<stdio.h>

int main(){
	int a, b, c;
	printf("nhap vao 3 so a,b,c la: ");
	scanf("%d %d %d", &a, &b, &c);
	
	int max = a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	printf("gia tri lon nhat la: %d", max);
	
	return 0;
}
