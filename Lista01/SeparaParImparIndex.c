#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);
    int v[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &v[i]);

    for (int i = 0; i < N; i++)
        if (!(v[i] % 2))
            printf("%d ", i);

    printf("\n");

    for (int i = 0; i < N; i++)
        if (v[i] % 2)
            printf("%d ", i);

    return 0;
}