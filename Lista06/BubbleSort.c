#include <stdio.h>
#include <stdlib.h>

void show(int v[], int l, int r)
{
    for (int i = l; i <= r; i++)
        printf("%d ", v[i]);

    printf("\n");
}

void bubblesort(int v[], int l, int r)
{
    for (int i = l; i < r; i++)
        for (int j = l; j < r; j++)
            if (v[j] > v[j + 1])
            {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
}

int main()
{
    int vetor[1000];
    int x = 0;

    while (scanf("%15d", &vetor[x]) != EOF)
        x++;

    show(vetor, 0, x - 1);

    bubblesort(vetor, 0, x - 1);

    show(vetor, 0, x - 1);

    return 0;
}

// int main()
// {
//     int vetor[] = {7, 3, 2, 5, 4, 3};

//     show(vetor, 0, 5);

//     bubblesort(vetor, 0, 5);

//     show(vetor, 0, 5);

//     return 0;
// }
