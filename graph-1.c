#include <stdio.h>
void main()
{
    int a[10][10], i, j, n, x, sumi, sumo, k;
    printf("\nEnter the No of vertices");
    scanf("%d", &n);

    printf("\nEnter adjacency matrix");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                printf("\nEnter the value between %d and %d vertex", i, j);
                scanf("%d", &a[i][j]);

                if (a[i][j] != 0 && a[i][j] != 1)
                {
                    a[i][j] = 1;
                }
                else
                a[i][j] = 0;
            }
            else
                a[i][j] = 0;
        }
    }
    printf("\nThe adjacency matrix is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}