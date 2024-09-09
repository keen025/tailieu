#include<stdio.h>
int mark[1000001];

int check(int a[],int n){
	for(int i=0;i<n;i++){
		if(mark[a[i]]>1) return 1;
	}
	return -1;
}
void in(int a[],int n){
	for(int i=0;i<n;i++){
		if(mark[a[i]]){
			printf("%d ",a[i]);
			mark[a[i]]=0;
		}
	}
}
//int check(int a[],int *n){
//	int check=1;
//	for(int i=0;i<*n-1;i++){
//		for(int j=i+1;j<*n;j++){
//			if(a[i]==a[j]){
//				check=0;
//				break;
//			}
//		}
//	}
//	if(check) return -1;
//	for(int i=0;i<*n-1;i++){
//		for(int j=i+1;j<*n;j++){
//			if(a[i]==a[j]){
//				for(int k=j;k<*n;k++){
//					a[k+1]=a[k];
//				}
//				*n--;
//				i--;
//			}
//		}
//	}
//	return 1;
//}
int main(){
	int n; scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
		mark[a[i]]++;
	}
	if(check(a,n)==-1) printf("ko co gia tri trung");
	else in(a,n);
	
	
	
	return 0;
}
