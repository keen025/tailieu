#include<stdio.h>
#include<ctype.h>
#include<string.h>



void dao(char *c){
	int l=0,r=strlen(c)-1;
	while(l<=r){
		char t=c[l];
		c[l]=c[r];
		c[r]=t;
		l++;
		r--;
	}
}
int main(){
	
	char s[]="hello";
	dao(s);
	printf("%s",s);
	
	
	return 0;
}
