#include <stdio.h>

int main(){
	int gio, phut, giay;
	printf("nhap lan luot gio phut giay: ");
	scanf("%d %d %d", &gio, &phut, &giay);
	
	int tong_giay_tuong_ung = gio*3600 + phut*60 + giay;
	printf("doi ra giay: %d", tong_giay_tuong_ung);
	
	return 0;
}
