#include<stdio.h>
#include<ctype.h>
#include<string.h>

void rev(char c[],int l,int r){
	if(l>r) return;
	else{
		char t=c[l];
		c[l]=c[r];
		c[r]=t;
		rev(c,l+1,r-1);
	}
}
int palindrome(char c[]){
	int l=0,r=strlen(c)-1;
	while(l<=r){
		if(c[l]!=c[r]) return 0;
		l++;
		r--;
	}
	return 1;
}

int main(){
	
//	char s[100];
//	gets(s);
//	printf("%s",s);

//	char s[1000];
//	gets(s);
//	printf("%d",strlen(s));

//	char s[100];
//	gets(s);
//	strrev(s);
//	printf("%s",s);

	char s[1000];
	gets(s);
	int n=0;
	char word[50][50];
	char *token=strtok(s," ");
	while(token!=NULL){
		strcpy(word[n],token);
		n++;
		token=strtok(NULL," ");
	}
	printf("%s",word[n-1]);
	return 0;
}
