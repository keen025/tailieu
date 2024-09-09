#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

typedef struct sv{
	char ten[100];
	char que[100];
	char hocluc[10];	
}sv;

void nhap(FILE *f,sv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		fgets(a[i].ten,sizeof(a[i].ten),f);
		a[i].ten[strlen(a[i].ten)-1]='\0';
		fgets(a[i].que,sizeof(a[i].que),f);
		a[i].que[strlen(a[i].que)-1]='\0';
		fgets(a[i].hocluc,sizeof(a[i].hocluc),f);
		a[i].hocluc[strlen(a[i].hocluc)-1]='\0';
	}
}
void thongke(sv a[],int n)
{
	int cnt1=0,cnt2=0,cnt3=0;
	for(int i=0;i<n;i++)
	{
		if(strcmp(a[i].hocluc,"A")==0) cnt1++;
		else if(strcmp(a[i].hocluc,"B")==0) cnt2++;
		else if(strcmp(a[i].hocluc,"C")==0) cnt3++;
	}
	printf("co %d hoc luc A, %d hoc luc B, %d hoc luc C\n",cnt1,cnt2,cnt3);
}
void tim(sv a[],int n,char name[])
{
	int check=1;
	for(int i=0;i<n;i++)
	{
		if(strcmp(a[i].ten,name)==0)
		{
			printf("%s %s %s\n",a[i].ten,a[i].que,a[i].hocluc);
			check=0;
			return;
		}
	}
	if(check) printf("ko tim thay sv\n");
}
int main()
{

    FILE *f=fopen("input.txt","r");
    if(f==NULL)
    {
        printf("file not found");
        return 0;
    }
    
    int n;
    fscanf(f,"%d\n",&n);
    sv a[n];
	nhap(f,a,n);
    
    thongke(a,n);
    
    char name[100];
    fgets(name,sizeof(name),f);
    name[strlen(name)-1]='\0';
    tim(a,n,name);
    

    fclose(f);
    return 0;
}


