#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	
	int hang_chuc = N/10;
	int hang_don_vi = N%10;
	int sum = hang_chuc + hang_don_vi;
	printf("%d + %d = %d", hang_chuc, hang_don_vi, sum);
	
	return 0;
}
