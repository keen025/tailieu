#include<stdio.h>
#include<math.h>
int fac(int n){
	int gt=1;
	for(int i=1;i<=n;i++)
		gt*=i;
	return gt;
}
int main(){
	int n; scanf("%d",&n);
	float sum=0;
// bai 1
//	for(int i=1;i<=n;i++){
//		gt*=i;
//		sum+=gt;
//	}
//	printf("%d\n",sum);
	
//bai 2
//	for(int i=1;i<=n;i++){
//		gt*=i;
//		if(i%2!=0) sum+=gt;
//		else sum-=gt;
//	}
//	printf("%d\n",sum);

//bai 3
	float x; scanf("%f",&x);
	for(int i=0;i<=n;i++){
		if(i%2==0){
			sum+=pow(x,2*i+1) / fac(2*i+1);
		}else{
			sum-=pow(x,2*i+1) / fac(2*i+1);
		}
	}
	printf("%.2f",sum);
	return 0;
}
