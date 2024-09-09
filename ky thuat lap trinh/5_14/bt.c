#include<stdio.h>
#include<math.h>
int isarmstrong(int n){
	int cnt=0,t=n,twp=n;
	while(n){
		cnt++;
		n/=10;
	}
	int sum=0;
	while(t){
		sum+=pow(t%10,cnt);
		t/=10;
	}
	return sum==twp;
}

int hh(int n){
	int sum=0;
	for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            sum+=i;

            if(i!=n/i) sum+=n/i;
        }
	}
	return sum-n == n;
}
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
void sx(int a[],int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) swap(&a[i],&a[j]);
        }
    }
}
int hv(int a[],int n,int b[],int m)
{
    if(n!=m) return -1;
    sx(a,n);
    sx(b,m);
    for(int i=0;i<n;i++){
        if(a[i]!=b[j]) return 0;
    }


    return 1;
}
int main(){

    int n,m; scanf("%d%d",&n,&m);
    int a[n];
    int b[m];
    for(int i=0;i<n;i++) scanf("%d",a+i);
    for(int i=0;i<n;i++) scanf("%d",b+i);
    int t=hv(a,n,b,m);
    if(t==-1) printf("do dai ko bang nhau");
    else if(t==0) printf("ko hv");
    else printf("hv");
	return 0;
}
