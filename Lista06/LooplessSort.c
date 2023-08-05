#include <stdio.h>
#include <stdlib.h>

void encontrarMinimo(int *v, int inicio, int fim, int *min)
{
    if (inicio >= fim - 1)
        return;

    if (v[inicio] < v[*min])
        *min = inicio;

    encontrarMinimo(v, inicio + 1, fim, min);
}

void ordenadora(int *v, int inicio, int fim)
{
    if (inicio >= fim - 1)
        return;

    int min = inicio;
    encontrarMinimo(v, inicio + 1, fim, &min);

    if (min != inicio)
    {
        int aux = v[inicio];
        v[inicio] = v[min];
        v[min] = aux;
    }

    ordenadora(v, inicio + 1, fim);
}

void ordena(int *v, int n)
{
    ordenadora(v, 0, n + 1);
}

int main()
{
    int vetor[] = {7, 3, 2, 5, 4, 3};

    ordena(vetor, 6);

    for (int i = 0; i < 6; i++)
        printf("%d ", vetor[i]);

    printf("\n");

    return 0;
}
