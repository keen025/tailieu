#include<stdio.h>

int main (){
	int n, count=0;
	printf("nhap so nguyen N: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		if(n % i ==0 ){
			count++;
		}
	}
	printf("co %d uoc so cua so nguyen duong %d", count, n);
	return 0;
}
