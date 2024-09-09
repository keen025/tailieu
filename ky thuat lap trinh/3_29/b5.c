#include<stdio.h>
void tron(int a[],int n,int b[],int m,int c[]){
	int i=0,j=0,cnt=0;
	while(i<n&&j<m){
		if(a[i]<=b[j]){
			c[cnt++]=a[i++];
		}else{
			c[cnt++]=b[j++];
		}
	}
	while(i<n){
		c[cnt++]=a[i++];
	}
	while(j<m){
		c[cnt++]=b[j++];
	}
}

int main(){
	int n,m; scanf("%d%d",&n,&m);
	int a[n],b[m];
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
	}
	for(int i=0;i<m;i++){
		scanf("%d",b+i);
	}
	int c[m+n];
	tron(a,n,b,m,c);
	for(int i=0;i<m+n;i++){
		printf("%d ",c[i]);
	}
	return 0;
}
