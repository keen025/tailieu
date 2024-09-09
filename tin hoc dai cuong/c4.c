#include <stdio.h>

int main(){
	int N;
	printf("nhap vao so nguyen N co 2 chu so: ");
	scanf("%d", &N);
	
	if (N>=10 && N<=99){
		int hang_chuc = N/10;
		int hang_don_vi = N%10;
		int tong = hang_chuc + hang_don_vi;
		printf("tong chu so hang chuc va hang don vi la: %d", tong);
		
	} else {
		printf("so nhap khong phai so 2 don vi");
	}
	return 0;
}
