#include<stdio.h>
#include<string.h>
int palindrome(int n)
{
    int rev=0,t=n;
    while(n){
        rev=rev*10+n%10;
        n/=10;
    }
    return rev==t;
}
int palindrome2(char c[]){
    int l=0,r=strlen(c)-1;
    while(l<=r){
        if(c[l]!=c[r]) return 0;
        l++;
        r--;
    }
    return 1;
}
int main()
{
    //bai2
    int n;
    scanf("%d",&n);
    if(palindrome(n)) printf("yes\n");
    else printf("no\n");

    //bai3
    char c[100];
    gets(c);
    if(palindrome2(c)) printf("yes");
    else printf("no");

    return 0;
}
