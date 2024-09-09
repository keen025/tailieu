#include<stdio.h>
int mark[10000];

int loaibo(int a[],int n,int b[],int *m){
    *m=0;
    int flag=1;
    for(int i=0;i<n;i++){
        int check=1;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                check=0;
                flag=0;
                break;
            }
        }
        if(check){
            b[*m]=a[i];
            *m++;
        }
    }
    if(flag) return 0;
    return 1;
}

int main()
{
    //bai1
    /*int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    for(int i=0;i<n;i++){
        int check=1;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                check=0;
                break;
            }
        }
        if(check) printf("%d ",a[i]);
    }*/
    //bai2
    /*
    int n,m;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    int t=loaibo(a,n,b,&m);
    if(t){
        for(int i=0;i<m;i++) printf("%d ",b[i]);
    }else printf("ham ko gia tri trung nhau");
    */

    //bai3




    return 0;
}
