#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct sv {
    char ten[100];
    char date[100];
    int income;
} sv;

int cmp(const void *a, const void *b) {
    sv *x = (sv *)a;
    sv *y = (sv *)b;
    return (y->income) - (x->income);
}

int main() {
    FILE *f = fopen("input.txt", "r");
    if (f == NULL) {
        printf("file not found\n");
        return 0;
    }

    int n;
    fscanf(f, "%d\n", &n);  // Read the number of records
    sv *a = (sv *)malloc(n * sizeof(sv));

    for (int i = 0; i < n; i++) {
        fgets(a[i].ten, sizeof(a[i].ten), f);
        a[i].ten[strlen(a[i].ten)-1] = '\0';  // Remove newline character

        fgets(a[i].date, sizeof(a[i].date), f);
        a[i].date[strlen(a[i].date)-1] = '\0';  // Remove newline character

        fscanf(f, "%d\n", &a[i].income);
    }

    qsort(a, n, sizeof(sv), cmp);

    for (int i = 0; i < n; i++) {
        printf("%s %s %d\n", a[i].ten, a[i].date, a[i].income);
    }

    printf("nhap ten sv: ");
    char name[100];
    fgets(name, sizeof(name), f);
    name[strlen(name)-1] = '\0';  // Remove newline character

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(name, a[i].ten) == 0) {
            printf("%s %s %d\n", a[i].ten, a[i].date, a[i].income);
            found = 1;
        }
    }
    if (!found) {
        printf("Student not found\n");
    }

    free(a);
    fclose(f);
    return 0;
}

