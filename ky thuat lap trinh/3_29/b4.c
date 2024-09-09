#include<stdio.h>
int checksort(int a[],int n){
	int check=1;
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
		check=0;
		break;
		}
	}
	if(check) return 1;
	check=1;
	for(int i=0;i<n-1;i++){
		if(a[i]<a[i+1]){
			check=0;
			break;
		}
	}
	if(check) return -1;

	else return 0;
}

int main(){
	int n; scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",a+i);
	int check = checksort(a,n);
	if(check==1) printf("da tang");
	else if(check==-1) printf("da giam");
	else printf("chx sort");
	
	
	
	
	
	
	
	
	return 0;
}
