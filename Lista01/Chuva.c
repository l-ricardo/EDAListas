#include <stdio.h>

int main()
{
    int N;

    scanf("%d ", &N);
    int v[2 * N][N];

    for (int i = 0; i < 2 * N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &v[i][j]);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d ", v[i][j] + v[i+N][j]);
        printf("\n");
    }

    return 0;
}