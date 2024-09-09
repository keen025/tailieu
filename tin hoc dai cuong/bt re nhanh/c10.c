#include <stdio.h>

int main() {
    float xA, yA, xB, yB;
    
    // Nhap toa do diem A v� B
    printf("Nhap toa do diem A (xA, yA): ");
    scanf("%f %f", &xA, &yA);
    
    printf("Nhap toa do diem B (xB, yB): ");
    scanf("%f %f", &xB, &yB);

    // Kiem tra xem doan thang AB cat ca truc hoanh va truc tung
    
    if (xA*xB >0 && yA*yB >0){
    	printf("Doan thang AB khong cat ca truc hoanh lan truc tung.\n");
    	
	} else if (xA*xB >0) {
        // Neu xA v� xB c�ng �m hoac c�ng duong, th� doan thang kh�ng cat truc tung
        printf("Doan thang AB khong cat truc tung.\n");
    } else if (yA*yB >0)) {
        // Neu yA v� yB c�ng �m hoac c�ng duong, th� doan thang kh�ng cat truc ho�nh
        printf("Doan thang AB khong cat truc hoanh.\n");
    } else {
        // Neu ca hai truong hop tr�n deu sai, tuc l� doan thang AB cat ca truc ho�nh v� truc tung
        printf("Doan thang AB cat ca truc hoanh va truc tung.\n");
    }

    return 0;
}

