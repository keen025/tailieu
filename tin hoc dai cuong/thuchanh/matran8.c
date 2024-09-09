#include<stdio.h>

int main(){
	int a[20][20];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("a[%d,%d]= ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("ma tran:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d  ",a[i][j]);
			
		}
		printf("\n");
	}
	//tinh tong cac phan tu tren duong cheo chinh
	int sum=0;
	for(int i=0;i<n;i++){
		sum += a[i][i];
	}
	int sum2=0;
	for(int i=0;i<n;i++){
		sum2 += a[i][n-1-i];
	}
	printf("tong cac phan tu tren duong cheo chinh la %d\n",sum);
	printf("tong cac phan tu tren duong cheo phu la %d\n",sum2);
	//tim phan tu co gia tri lon nhat
	printf("ma tran: \n");
	int max = a[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j] > max){
				max = a[i][j];
			}
			
		}
	}
	printf("phan tu lon nhat la %d",max);
	return 0;
}
