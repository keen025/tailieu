#include<stdio.h>
#include<math.h>
int sum(int n){
	int tong=0;
	while(n){
		tong+=n%10;
		n/=10;
	}
	return tong;
}
int check(int n){
	int tong=0,t=n;
	while(n){
		tong+= pow(n%10,3);
		n/=10;
	}
	return t==tong;
}
int main(){
	//bai 6
//	int n;
//	scanf("%d",&n);
//	if(n>=100 && n<=999){
//		printf("%d\n",sum(n));
//	}
	
//	//bai 7
//	int n;
//	scanf("%d",&n);
//	
//	printf("%d\n",sum(n));
	
	//bai 8
//	int n;
//	scanf("%d",&n);
//	if(n>=100 && n<=999){
//		if(check(n)) printf("YES\n");
//		else printf("NO\n");
//	}
	
	//bai 9
	for(int i=100;i<=999;i++){
		if(check(i)) printf("%d ",i);
	}
	return 0;
}
