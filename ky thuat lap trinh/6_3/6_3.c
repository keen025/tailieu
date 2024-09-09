#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("input.txt", "r");
    if (f == NULL)
    {
        printf("file not found");
        return 0;
    }

    int m, n;
    fscanf(f, "%d%d", &m, &n);

    
    int **a = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fscanf(f, "%d", &a[i][j]);
        }
    }

    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum += a[i][j];
        }
        printf("tong cac phan tu cot %d la %d\n", j + 1, sum);
    }

    
    free(a);

    fclose(f);

    return 0;
}

