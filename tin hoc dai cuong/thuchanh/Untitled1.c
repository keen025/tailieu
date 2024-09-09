#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	int x;
	scanf("%d",&x);
	int sum=0;
	for(int i=0;i<n;i++){
		sum += a[i]*pow(x,i);
	}
	printf("P= %d\n",sum);
	
}
