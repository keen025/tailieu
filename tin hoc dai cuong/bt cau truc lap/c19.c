#include <stdio.h>

int main(){
	int a, b, min, max, uscln, bscnn;
	printf("nhap so nguyen duong a: ");
	scanf("%d", &a);
	printf("nhap so nguyen duong b: ");
	scanf("%d", &b);
	//tim uoc so chung lon nhat
	if(a>b){
		min = b;
	}else{
		min = a;
	}
	for(int i=min; i >= 1; i--){
		if(a%i == 0 && b%i == 0){
			uscln = i;
			break;
		}
	}
	
	//tim boi so chung lon nhat
	if(a<b){
		max = b;
	}else{
		max = a;
	}
	for(int i=max; ; i++){
		if(i%a ==0 && i%b ==0){
			bscnn = i;
			break;
		}
	}
	
	printf("uoc so chung lon nhat la: %d\n", uscln);
	printf("boi so chung nho nhat la: %d\n", bscnn);
	
	return 0;
}
