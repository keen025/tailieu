#include <stdio.h>

int main(){
	int f, c;
	printf("nhap so do f: ");
	scanf("%d", &f);
	
	c = ((float)5 / 9) * (f-32);
	
	printf("xuat ra do c: %d", c);
	
	return 0;
}
