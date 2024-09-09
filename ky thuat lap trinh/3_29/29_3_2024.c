#include<stdio.h>
#include<math.h>
int check(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
long long gt(long long n){
	long long res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}
long long gt2(long long n){
	if(n==0||n==1) return 1;
	else return n*gt2(n-1);
}
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int pt(float a,float b,float c,float *x1,float *x2){
	if(a==0){
		return -1;
	}else{
		float delta=b*b - 4*a*c;
		if(delta<0){
			return 0;
		}
		else if(delta>0){
			*x1 = (-b+sqrt(delta))/ 2.0*a;
			*x2 = (-b-sqrt(delta)) /2.0*a;
			return 2;
		}
		else{
			*x1 = -b/2.0*a;
			return 1;
		}
	}
}
int main(){
	float a,b,c; scanf("%f%f%f",&a,&b,&c);
	float x1,x2;
	int t=pt(a,b,c,&x1,&x2);
	if(t==-1) printf("pt bac 1");
	else if(t==0) printf("vo nghiem");
	else if(t==1) printf("nghiem kep x = %.2f",x1);
	else if(t==2) printf("2 nghiem x1 = %.2f , x2 = %.2f",x1,x2);
	return 0;
}
