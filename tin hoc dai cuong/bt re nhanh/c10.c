#include <stdio.h>

int main() {
    float xA, yA, xB, yB;
    
    // Nhap toa do diem A và B
    printf("Nhap toa do diem A (xA, yA): ");
    scanf("%f %f", &xA, &yA);
    
    printf("Nhap toa do diem B (xB, yB): ");
    scanf("%f %f", &xB, &yB);

    // Kiem tra xem doan thang AB cat ca truc hoanh va truc tung
    
    if (xA*xB >0 && yA*yB >0){
    	printf("Doan thang AB khong cat ca truc hoanh lan truc tung.\n");
    	
	} else if (xA*xB >0) {
        // Neu xA và xB cùng âm hoac cùng duong, thì doan thang không cat truc tung
        printf("Doan thang AB khong cat truc tung.\n");
    } else if (yA*yB >0)) {
        // Neu yA và yB cùng âm hoac cùng duong, thì doan thang không cat truc hoành
        printf("Doan thang AB khong cat truc hoanh.\n");
    } else {
        // Neu ca hai truong hop trên deu sai, tuc là doan thang AB cat ca truc hoành và truc tung
        printf("Doan thang AB cat ca truc hoanh va truc tung.\n");
    }

    return 0;
}

