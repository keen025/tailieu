#include <stdio.h>
#include <math.h>
long long fac(int n){
	long long fac=1;
	for(int i=1;i<=n;i++){
		fac *=i;
	}
	return fac;
}
int main(){
	double n;
	scanf("%lf",&n);
	double sum = 0.0;
	int t=n;
	long long gt=1;
	for(int i = 1; i<=n; i++){
		gt *= i;
		sum += (pow(-1,i)*pow(i,t))/ (i+gt);	
		--t;
	}
	
	
	if(sum<0){
		printf("ko tinh duoc\n");
	}else{
		sum = 2023 + sqrt(sum);
		printf("%.4lf",sum);
	}
	
	return 0;
}
