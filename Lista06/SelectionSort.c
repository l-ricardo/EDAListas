#include <stdio.h>
#include <stdlib.h>

void selectionsort(int *v, int l, int r)
{
    for (int i = l; i < r; i++)
    {
        int min = i;
        for (int j = i + 1; j < r; j++)
        {
            if (v[j] > v[min])
                min = j;

            int aux = v[j];
            v[j] = v[min];
            v[min] = aux;
        }
    }
}

int main()
{
    int vetor[] = {7, 3, 2, 5, 4, 3};

    selectionsort(vetor, 0, 6);

    for (int i = 0; i < 6; i++)
        printf("%d ", vetor[i]);

    printf("\n");

    return 0;
}
