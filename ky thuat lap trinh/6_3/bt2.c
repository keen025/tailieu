#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sv {
    char ten[50];
    double toan, ly, hoa;
    double tongdiem;
} sv;

int comp(const void *a, const void *b) {
    sv *x = (sv*)a;
    sv *y = (sv*)b;
    return y->tongdiem - x->tongdiem;
}

int main() {
	char text[50];
	fgets(text,sizeof(text),stdin);
	text[strlen(text)-1]='\0';
    FILE *f = fopen(text, "r");
    if (f == NULL) {
        printf("file not found\n");
        return 0;
    }

    int n;
    double diem;
    fscanf(f, "%d%lf\n", &n, &diem);

    sv *a = (sv *)malloc(n * sizeof(sv));
    

    for (int i = 0; i < n; i++) {
        fgets(a[i].ten, sizeof(a[i].ten), f);
        a[i].ten[strlen(a[i].ten)-1] = '\0'; 
        fscanf(f, "%lf%lf%lf\n", &a[i].toan, &a[i].ly, &a[i].hoa);
        a[i].tongdiem = a[i].toan + a[i].ly + a[i].hoa;
    }
    fclose(f);

    printf("nhap ten thi sinh:\n");
    
    char name[50];
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';  
	int check=1;
	
    for (int i = 0; i < n; i++) {
        if (strcmp(name, a[i].ten) == 0) {
            printf("%s %.2lf %.2lf %.2lf\n", a[i].ten, a[i].toan, a[i].ly, a[i].hoa);
            check=0;
        }
    }
	if(check) printf("ko tim thay sv\n");
	
    f = fopen("output.txt", "w");
    

    qsort(a, n, sizeof(sv), comp);

    fprintf(f, "danh sach thi sinh trung tuyen la\n");
    for (int i = 0; i < n; i++) {
        if (a[i].tongdiem >= diem) {
            fprintf(f, "%s\n", a[i].ten);
        }
    }

    free(a);
    fclose(f);
    return 0;
}

