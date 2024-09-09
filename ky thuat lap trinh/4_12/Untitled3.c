#include<stdio.h>
#include<math.h>

int ucln(int x,int y){
	if(x==y) return x;
	else{
		if(x>y) ucln(x-y,y);
		else ucln(x,y-x);
	}
}


int gcd(int x,int y){
	if(y==0) return x;
	else gcd(y,x%y);
}
int max(int a[],int n){
	if(n==1) return a[0];
	else return max(a,n-1)>a[n-1] ? max(a,n-1):a[n-1];
}
int timmax(int a[],int n){
	if(n==1) return a[0];
	else{
		int x=timmax(a,n-1);
		if(a[n-1]>x) return a[n-1];
		else return x;
	}
}
int prime(int n,int i,int d){
	if(i>d) return 1;
	else{
		if(n%i==0) return 0;
		else prime(n,i+1,d);
	}
}
int tong(int a[],int n){
	if(n==1) return a[0];
	else return a[n-1]+tong(a,n-1);
}
int nt(int n,int i){
	if(i>sqrt(n)) return 1;
	else{
		if(n%i==0) return 0;
		else nt(n,i+1);
	}
}
int daonguoc(int n){
	int rev=0;
	while(n){
		rev=rev*10+n%10;
		n/=10;
	}
	return rev;
}
int rev(int n,int r){
	if(n==0) return r;
	else{
		r=r*10+n%10;
		rev(n/10,r);
		
	}
}


int fibo(int n){
	if(n==0||n==1) return 1;
	else return fibo(n-1)+fibo(n-2);
}

int val(int n){
	int t=0;
	if(n==0) return 1;
	for(int i=0;i<n;i++){
		t=t+(n-i)*(n-i)*val(i);
	}
	return t;
}

int main(){
	int n; scanf("%d",&n);
//	if(nt(n,2)) printf("%d la so nguyen to",n);
//	else{
//		printf("%d ko phai la so nguyen to, uoc that su cua no la\n",n);
//		for(int i=2;i<n;i++){
//			if(n%i==0) printf("%d \n",i);
//		}
//	}
//	printf("%d %d",daonguoc(n),rev(n,0));
	printf("%d ",val(n));
	return 0;
}
