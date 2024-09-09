#include<stdio.h>
int main(){
    int total_seconds, hours, minutes, seconds;
    printf("Nhap thoi gian tinh bang seconds: ");
    scanf("%d", &total_seconds);
    
    hours = total_seconds / 3600;
    total_seconds %= 3600;
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;
    
    printf("Thoi gian cong viec do la: %d gio %d phut %d giay\n", hours, minutes, seconds);
    
    return 0;
    
}
