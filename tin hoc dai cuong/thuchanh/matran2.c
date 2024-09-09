#include<stdio.h>

int main(){
	float a[20][20];
	int m,n;
	printf("nhap so hang: ");
	scanf("%d",&m);
	printf("nhap so cot: ");
	scanf("%d",&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("a[%d,%d]= ",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	printf("ma tran: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%.2f ",a[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
	printf("tinh tong cac gia tri moi dong\n");
	for(int i=0;i<m;i++){
		float suml=0;
		for(int j=0;j<n;j++){
			suml+=a[i][j];
			
		}
		printf("tong cac gia tri dong thu %d la %.2f\n",i+1,suml);
	}
	printf("\n");
	printf("tinh tich cac gia tri theo cot\n");
	for(int j=0;j<n;j++){
		float mul_c = 1;
		for(int i=0;i<m;i++){
			mul_c *= a[i][j];
			
		}
		printf("tich cac gia tri cot %d la %.2f\n",j+1,mul_c);
	}
	return 0;
}
