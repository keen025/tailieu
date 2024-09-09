#include<stdio.h>

int main(){
	float toan, ly, hoa;
	printf("nhap vao diem thi 3 mon la: ");
	scanf("%f %f %f", &toan, &ly, &hoa);
	
	float sum = toan + ly + hoa;
	if(sum >=15 && toan >=4 && ly >=4 && hoa >=4){
		printf("dau\n");
		if(toan>5 && ly>5 && hoa>5){
			printf("hoc deu cac mon");
		}else{
			printf("hoc khong deu cac mon");
		}
		
		
	}else{
		printf("thi hong");
	}
	return 0;
}
