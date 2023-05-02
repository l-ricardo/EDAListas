#include <stdio.h>

int main()
{
    int N;
    int indexMenor = 0;

    scanf("%d", &N);
    int v[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &v[i]);

    for (int i = 0; i < N; i++)
        if (v[i] < v[indexMenor])
            indexMenor = i;

    printf("%d\n", indexMenor);

    return 0;
}