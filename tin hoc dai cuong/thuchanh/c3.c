#include <stdio.h>
long long f[93];
void fib() {
	f[0]=0,f[1]=1;
	for(int i=2;i<=92;i++){
		f[i] = f[i-1] + f[i-2];
	}
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	fib();
	
	if(a>=b || b<=0){
		printf("ko thoa man");
	}else{
		int check=0;
		for(int i=0;i<=92;i++){
			if(f[i]>a && f[i]<b){
				printf("%d ",f[i]);
				check=1;
			}
		}
		if(check==0) printf("khong co so thoa man");	
	}
	
}
