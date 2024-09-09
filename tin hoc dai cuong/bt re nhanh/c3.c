#include<stdio.h>

int main(){
	int diem;
	printf("nhap diem thi: ");
	scanf("%d", &diem);
	
	if(0<diem && diem <3){
		printf("kem");
	}else if(diem == 4){
		printf("yeu");
	}else if(diem >= 5 && diem <= 6){
		printf("trung binh");
	}else if(diem >= 7 && diem <=8){
		printf("kha");
	}else if(diem >= 9 && diem <= 10){
		printf("gioi");
	}
	
	return 0;
}
