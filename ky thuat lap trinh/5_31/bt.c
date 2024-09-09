#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct sv {
    char ten[50];
    double diem;
    char trng[10];
} sv;

int cmp(const void *a, const void *b) {
    sv *x = (sv *)a;
    sv *y = (sv *)b;
    return (y->diem - x->diem > 0) - (y->diem - x->diem < 0);  // Correct comparison for double
}

void nhap(FILE *f, sv a[], int n) {
    for (int i = 0; i < n; i++) {
        fgets(a[i].ten, sizeof(a[i].ten), f);
        a[i].ten[strlen(a[i].ten)-1] = '\0';  // Remove newline character

        fscanf(f, "%lf\n", &a[i].diem);

        fgets(a[i].trng, sizeof(a[i].trng), f);
        a[i].trng[strlen(a[i].trng)-1] = '\0';  // Remove newline character
    }
}

void in(FILE *f, sv a[], int n) {
    for (int i = 0; i < n; i++) {
        fprintf(f, "%s %.2f %s\n", a[i].ten, a[i].diem, a[i].trng);
    }
}

int main() {
    FILE *f = fopen("input.txt", "r");
    if (f == NULL) {
        printf("file not found\n");
        return 0;
    }

    int n;
    printf("nhap so sinh vien: \n");
    fscanf(f, "%d\n", &n);
    sv a[n];
    printf("nhap ds sinh vien: \n");
    nhap(f, a, n);
    fclose(f);  // Close the file after reading

    double sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    double maxdiem = -1e9;
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].trng, "A") == 0) sum1 += a[i].diem;
        else if (strcmp(a[i].trng, "B") == 0) sum2 += a[i].diem;
        else if (strcmp(a[i].trng, "C") == 0) sum3 += a[i].diem;
        else if (strcmp(a[i].trng, "D") == 0) sum4 += a[i].diem;
        if (a[i].diem > maxdiem) maxdiem = a[i].diem;
    }

    double max = fmax(fmax(sum1, sum2), fmax(sum3, sum4));

    printf("ds truong co tong diem cao nhat la:\n");
    if (sum1 == max) printf("A ");
    if (sum2 == max) printf("B ");
    if (sum3 == max) printf("C ");
    if (sum4 == max) printf("D ");
    printf("\ndiem cao nhat la %.2f\n", maxdiem);
    printf("danh sach thi sinh dat diem cao nhat la:\n");
    for (int i = 0; i < n; i++) {
        if (a[i].diem == maxdiem) {
            printf("%s %.2f %s\n", a[i].ten, a[i].diem, a[i].trng);
        }
    }

    qsort(a, n, sizeof(sv), cmp);
    f = fopen("output.txt", "w");
    if (f == NULL) {
        printf("Cannot open output file\n");
        return 0;
    }
    in(f, a, n);
    fclose(f);

    return 0;
}

