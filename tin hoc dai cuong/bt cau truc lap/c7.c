#include<stdio.h>
#include<math.h>
int main(){
	int n, s=0;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	
	for(int i = 1; i<=n; i++){
		s += pow(i, 2);
		
	}
	printf("S(%d)= %d", n, s);
	
	return 0;
}
