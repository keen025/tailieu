#include<stdio.h>
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return a/gcd(a,b)*b;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",a+i);
    int ucln=a[0],bcnn=a[0];
    for(int i=0;i<n;i++){
        ucln=gcd(ucln,a[i]);
        bcnn=lcm(bcnn,a[i]);
    }
    printf("%d %d",ucln,bcnn);
    return 0;
}
