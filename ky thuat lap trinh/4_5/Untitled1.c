#include<stdio.h>
void nhap(int *a,int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",a+i*50+j);
		}
	}
}
int tong(int a[][50],int m,int n){
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum+=a[i][j];	
		}
	}
	return sum;
}
void in(int a[][50],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d	",a[i][j]);
		}
		printf("\n\n");
	}
}
int main(){
	int m,n; scanf("%d%d",&m,&n);
	int a[m][n];
	nhap((int*)a,m,n);
	in(a,m,n);
	printf("\n");
	printf("%d",tong(a,m,n));
	return 0;
}
