#include<stdio.h>
int Xn(int n){
	if(n==0) return 1;
	int sum=0;
	for(int i=1;i<n;i++){
		sum+=i*Xn(n);
	}
	return sum;
}
int ackerman(int m,int n){
	if(m==0) return n+1;
	if(m>0&&n==0) return ackerman(m-1,1);
	if(m>0&&n>0) return ackerman(m-1,ackerman(m,n-1));
}
int main(){
	
	FILE *f; 
	f=fopen("input.txt","r");
	if(f==NULL){
		printf("ko ton tai file");
		return 0;
	}
	
	return 0;
}
