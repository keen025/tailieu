#include<stdio.h>
#include<math.h>
int check(int n){
	int cnt=0,tmp=n;
	while(n){
		cnt++;
		n/=10;
	}
	int tong=0,t=tmp;
	while(tmp){
		tong+=pow(tmp%10,cnt);
		tmp/=10;
	}
	return tong==t;
}
long long f[93];
void fibo(){
	f[0]=0;
	f[1]=1;
	for(int i=2;i<93;i++){
		f[i]=f[i-1]+f[i-2];
	}
}
int kt(int a[],int n){
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]) return 0;
	}
	return 1;
}
int main(){
	// bai 10
//	int n;
//	scanf("%d",&n);
//	if(check(n)) printf("YES");
//	else printf("NO");
	
	//bai 11
//	int n; scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		if(check(i)) printf("%d ",i);
//	}
	//bai 12
//	int n; scanf("%d",&n);
//	fibo();
//	printf("%lld",f[n-1]);
	
	//bai 13
//	int n;
//	scanf("%d",&n);
//	fibo();
//	for(int i=0;i<93;i++){
//		if(f[i]<=n) printf("%lld ",f[i]);
//	}

	//bai 14
	int n; scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",a+i);
	if(kt(a,n)) printf("da xap xep tang dan");
	else printf("chx xap xep tang dan");
	return 0;
}
