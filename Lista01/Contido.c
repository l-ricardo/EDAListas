#include <stdio.h>

int main()
{
    int N, pesquisa;
    int flag = 0;

    scanf("%d", &N);
    int v[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &v[i]);

    scanf("%d", &pesquisa);

    for (int i = 0; i < N; i++)
        if (v[i] == pesquisa)
            flag = 1;

    flag ? printf("pertence\n") : printf("nao pertence\n");

    return 0;
}