#include <stdio.h>

int main()
{
    int N, M;
    int total=0;

    scanf("%d %d", &N, &M);
    int v[N][M];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &v[i][j]);

    for (int i = 0; i < N; i++)
    {
        int aux = 0;
        for (int j = 0; j < M; j++)
            aux += v[i][j];
        if (aux > total)
            total = aux;
    }

    for (int i = 0; i < M; i++)
    {
        int aux = 0;
        for (int j = 0; j < N; j++)
            aux += v[j][i];
        if (aux > total)
            total = aux;
    }

    printf("%d\n", total);

    return 0;
}