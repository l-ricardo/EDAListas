#include <stdio.h>
#include <stdlib.h>

void insertionsort(int *v, int l, int r)
{
    for (int i = l + 1; i <= r; i++)
        for (int j = i; j > l && v[j] < v[j - 1]; j--)
        {
            int aux = v[j];
            v[j] = v[j - 1];
            v[j - 1] = aux;
        }
}

int main()
{
    int vetor[] = {7, 3, 2, 5, 4, 3};

    insertionsort(vetor, 0, 6);

    for (int i = 0; i < 6; i++)
        printf("%d ", vetor[i]);

    printf("\n");

    return 0;
}
