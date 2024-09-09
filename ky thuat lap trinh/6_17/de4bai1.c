#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void nhap(FILE *f,int a[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            fscanf(f,"%d",&a[i][j]);
        }
    }
}
double res(int a[][100],int n)
{
    double sum=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>n-1-i)
            {
                sum+=a[i][j];
                cnt++;
            }
        }
    }
    return sum/cnt;
}
int check(int a[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(a[i][j]!=0) return 0;
        }
    }
    return 1;
}
int main()
{
    char file[50];
    gets(file);

    FILE *f=fopen(file,"r");
    if(f==NULL)
    {
        printf("file not found");
        return 0;
    }
    int n;
    fscanf(f,"%d",&n);
    int a[100][100];
    nhap(f,a,n);
    printf("trung binh cong cac phan tu nam duoi dng cheo phu la %.3lf\n",res(a,n));

    if(check(a,n)) printf("yes\n");
    else printf("no\n");

    fclose(f);
    return 0;
}


