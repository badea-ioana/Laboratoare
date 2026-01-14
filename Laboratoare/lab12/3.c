#include <stdio.h>

void functie(int v[3][3], int u[3][3], int n)
{
    int i, j, aux;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            aux = v[i][j];
            v[i][j] = u[i][j];
            u[i][j] = aux;
        }
}

int main()
{
    int i, j, n;
    int v[3][3], u[3][3];

    printf("\nn:= ");
    scanf("%d", &n);

    if (n <= 0 || n > 3)
    {
        printf("Invalid n");
        return 0;
    }

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            printf("\nv[%d][%d]: ", i, j);
            scanf("%d", &v[i][j]);
        }

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            printf("\nu[%d][%d]: ", i, j);
            scanf("%d", &u[i][j]);
        }

    functie(v, u, n);

    printf("\nMatrix v:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            printf("v[%d][%d] = %d\n", i, j, v[i][j]);

    printf("\nMatrix u:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            printf("u[%d][%d] = %d\n", i, j, u[i][j]);

    return 0;
}

