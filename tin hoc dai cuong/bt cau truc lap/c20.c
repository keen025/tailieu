#include<stdio.h>

int main(){
	int n, max;
	printf("nhap so nguyen duong N: ");
	scanf("%d", &n);
	
	for(int i= n-1; i >=1; i--){
		if(n%i ==0 && i%2 !=0){
			max = i;
			break;
		}
	}
	printf("uoc so le lon nhat cua N: %d", max);
	return 0;
}
