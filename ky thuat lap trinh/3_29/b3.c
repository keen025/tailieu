#include<stdio.h>
int check(int n){
	int t=n;
	int rev=0;
	while(n){
		rev=rev*10+ n%10;
		n/=10;
	}
	return t==rev;
}
int palind(char c[]){
	int l=0, r=strlen(c)-1;
	while(l<=r){
		if(c[l]!=c[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
int main()
{
	char c[1000]; scanf("%s",c);
	if(palind(c)) printf("1");
	else printf("0");
}
return 0;
