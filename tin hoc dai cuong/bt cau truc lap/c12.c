#include <stdio.h>

int main() {
	int N, s=0;
	printf("nhap so nguyen N: ");
	scanf("%d", &N);
	
	for(int i=1; i<=N ; i++){
		if(N % i ==0){
			s += i;
		}
	
	}
	printf("tong uoc so: %d", s);
    return 0;
}

