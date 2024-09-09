#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char Hoten[100];
    double Luong;
    int MaVC;
} NhanVien;

void nhapDanhSach(NhanVien a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin nhan vien thu %d:\n", i + 1);
        printf("Ho ten: ");
        getchar(); // to consume the newline character left by the previous input
        fgets(a[i].Hoten, sizeof(a[i].Hoten), stdin);
        a[i].Hoten[strcspn(a[i].Hoten, "\n")] = '\0'; // remove newline character
        printf("Luong: ");
        scanf("%lf", &a[i].Luong);
        printf("Ma vien chuc (1, 2, 3): ");
        scanf("%d", &a[i].MaVC);
    }
}

void xuatDanhSach(FILE *f, NhanVien a[], int n) {
    fprintf(f, "%d\n", n);
    for (int i = 0; i < n; i++) {
        fprintf(f, "%s\n%.2f\n%d\n", a[i].Hoten, a[i].Luong, a[i].MaVC);
    }
}

int cmp(const void *a, const void *b) {
    NhanVien *x = (NhanVien *)a;
    NhanVien *y = (NhanVien *)b;
    return (y->Luong - x->Luong > 0) - (y->Luong - x->Luong < 0);  // Correct comparison for double
}

void inDanhSach(NhanVien a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s %.2f %d\n", a[i].Hoten, a[i].Luong, a[i].MaVC);
    }
}

void tinhTrungBinhLuong(NhanVien a[], int n) {
    double sum1 = 0, sum2 = 0, sum3 = 0;
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].MaVC == 1) {
            sum1 += a[i].Luong;
            count1++;
        } else if (a[i].MaVC == 2) {
            sum2 += a[i].Luong;
            count2++;
        } else if (a[i].MaVC == 3) {
            sum3 += a[i].Luong;
            count3++;
        }
    }
    if (count1 > 0) printf("Trung binh luong MaVC 1: %.2f\n", sum1 / count1);
    if (count2 > 0) printf("Trung binh luong MaVC 2: %.2f\n", sum2 / count2);
    if (count3 > 0) printf("Trung binh luong MaVC 3: %.2f\n", sum3 / count3);
}

int main() {
    int n;
    printf("Nhap so nhan vien: ");
    scanf("%d", &n);
    NhanVien *a = (NhanVien *)malloc(n * sizeof(NhanVien));

    nhapDanhSach(a, n);

    FILE *f = fopen("output.txt", "w");
    if (f == NULL) {
        printf("Cannot open output file\n");
        return 1;
    }
    xuatDanhSach(f, a, n);
    fclose(f);

    qsort(a, n, sizeof(NhanVien), cmp);

    printf("Danh sach nhan vien theo thu tu luong tu cao den thap:\n");
    inDanhSach(a, n);

    tinhTrungBinhLuong(a, n);

    free(a);
    return 0;
}

