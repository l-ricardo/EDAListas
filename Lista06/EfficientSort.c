#include <stdio.h>
#include <stdlib.h>

void mergesort(int *v, int l, int r)
{ // Todo: Aprender e aplicar quicksort aqui
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
    int vetorSize;
    scanf("%d", &vetorSize);

    int *vetor = malloc(vetorSize * sizeof(int));
    for (int i = 0; i < vetorSize; i++)
        scanf("%d", &vetor[i]);

    mergesort(vetor, 0, vetorSize);

    for (int i = 0; i < vetorSize; i++)
        printf("%d ", vetor[i]);

    printf("\n");

    return 0;
}
