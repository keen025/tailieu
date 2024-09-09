#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d]= ",i);		
		scanf("%d",&a[i]);
	}
	int count=0;
	if(n<1){
		count = 0;
	}else if(n==1){
		count =1;
	}else{
		for(int i=2;i<n-1;i++){
			if((a[i]>a[i-1] && a[i] >a[i+1]) || (a[i]<a[i-1] && a[i] <a[i+1])){
				count++;
			}
		}
		if(a[n-1] != a[n-2]) ++count;
		if(a[0] != a[1]) ++count;
	}
	if(count) printf("so lau dai %d",count);
	else printf("ko co lau dai");
}
