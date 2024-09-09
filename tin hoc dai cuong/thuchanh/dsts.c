#include<stdio.h>
#include<conio.h>
typedef struct TS{
	char ht[30];
	char sbd[10];
	char que[12];
	char truong;
	float diem;
};
int main(){
	TS ts[20];
	int n;
	printf("nhap so thi sinh: ");
	scanf("%d",&n);
	printf("nhap du lieu\n");
	for(int i=0;i<n;i++){
		printf("thi sinh thu %d\n",i+1);
		printf("he ten thi sinh: ");
		fflush(stdin); 
		gets(ts[i].ht);
		printf("so bao danh: ");
		fflush(stdin); 
		gets(ts[i].sbd);
		printf("truong: ");
		scanf("%c",&ts[i].truong);
		printf("diem thi: ");
		scanf("%f"&ts[i].diem);
		
	}
	printf("danh sach thi sinh");
	for(int i=0;i<n;i++){
		
	}
	
}
