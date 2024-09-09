#include<stdio.h>
void nhap(char c,int a[][50],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%c[%d][%d]=",c,i+1,j+1);
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
void nhan(int a[][50],int b[][50],int c[][50],int n,int m,int q){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<q;j++){
			c[i][j]=0;
			for(int k=0;k<m;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
}
int main(){
	int n,m,q;
	printf("nhap n hang m cot ma tran A: ");
	scanf("%d%d",&n,&m);
	printf("nhap n hang m cot ma tran B: ");
	scanf("%d%d",&m,&q);
	int a[n][m];
	int b[m][q];
	printf("nhap ma tran A:\n");
	nhap('a',a,n,m);
	printf("nhap ma tran B:\n");
	nhap('b',b,m,q);
	int c[n][q];
	nhan(a,b,c,n,m,q);
	in(c,n,q);
	return 0;
}
