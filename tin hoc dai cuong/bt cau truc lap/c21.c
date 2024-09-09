#include<stdio.h>

int main(){
	int randomnumber;
	int number = 60;
	int count = 0;
	
	
	do{
		printf("nhap gia tri ban doan: ");
		scanf("%d", &randomnumber);
		count++;
		if(randomnumber > number){
			printf("lon hon, yeu cau ban nhap lai.\n");
		}else if(randomnumber < number){
			printf("nho hon, yeu cau ban nhap lai.\n");
		}else if(randomnumber == number){
			printf("ban da doan dung, so lan ban doan la: %d", count);
		}
	}while(randomnumber != number);
	
	return 0;
}
