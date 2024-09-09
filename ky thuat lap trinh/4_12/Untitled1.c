#include<stdio.h>
void nhap(int a[][50],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void in(int a[][50],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d	",a[i][j]);
		}
		printf("\n");
	}
}
int tong(int a[][50],int n,int m){
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum+=a[i][j];
		}
	}
	return sum;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	nhap(a,n,m);
	in(a,n,m);
	printf("\n%d",tong(a,n,m));
	return 0;
}
