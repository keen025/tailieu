#include<stdio.h>

int main (){
	int n, count;
	printf("nhap so nguyen duong N: ");
	scanf("%d", &n);
	
	for(int i=n; i>=1; i--){
		if(n%i==0 && i%2 !=0){
			count = i;
			break;
		}
	}
	printf("uoc so le lon nhat la: %d", count);
	
	
	return 0;
}
