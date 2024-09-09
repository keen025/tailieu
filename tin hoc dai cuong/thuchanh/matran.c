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
	float s=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j] >0){
				s+=a[i][j];
			}
		}
	}
	printf("tong cac gia tri duong: %.2f\n",s);
	float p=1;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j] %2 !=0){
				p*=a[i][j];
			}
		}
	}
	printf("tich cac gia tri le: %.2f\n",p);
	return 0;
}
