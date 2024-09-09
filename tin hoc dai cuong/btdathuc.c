#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d]= ",i);		
		scanf("%d",&a[i]);
	}	
	int x;
	scanf("%d",&x);
	double sum=0;
	for(int i=0;i<n;i++){
		sum += a[i]*pow(x,i);
	}
	printf("P= %.2lf\n",sum);
	int b[n];
	for(int i=0;i<n;i++){
		b[i] = a[i]*i;
	}	
	double sum2=0;
	for(int i=0;i<n;i++){
		sum2 += b[i]*pow(x,i-1);
	}
	printf("Q= %.2lf\n",sum2);
	
	int max=abs(a[0]);
	for(int i=0;i<n;i++){
		if(abs(a[i])>max){
			max=abs(a[i]);
		}
	}
	printf("a max = %d",max);
	
	
}
