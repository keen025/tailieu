#include <stdio.h>

int main() {
	int n;
	printf("nhap so nguyen n co 3 chu so: ");
	scanf("%d", &n);
	
	int don_vi = n%10;
	int chuc = (n/10) % 10;
	int tram = n/100;
	
	printf("thu tu nguoc lai cac chu so cua 123 la: %d%d%d", don_vi, chuc, tram);
	
    return 0;
}
