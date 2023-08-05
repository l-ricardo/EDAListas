#include <stdio.h>
#include <stdlib.h>
void merge(int *v, int l, int m, int r)
{ // Todo: entender saporra
    // quanto espaÃ§o?
    int tam = r + 1 - l;

    // alocar espaÃ§o auxiliar
    int *aux = malloc(tam * sizeof(int));

    // auxiliares
    int i = l;     // inicio do sub-vetor esquerdo
    int j = m + 1; // inicio do sub-vetor direito
    int k = 0;     // inicio do vetor auxiliar

    // ordenar em aux[k]
    while (k < tam) // condiÃ§Ã£o de parada do aux
    {
        if (i > m)             // ordenou todo o primeiro sub-vetor
            aux[k++] = v[j++]; // consome o segundo sub-vetor -> ordene no aux

        else if (j > r)        // ordenou todo o segundo sub-vetor
            aux[k++] = v[i++]; // consome o primeiro sub-vetor -> ordene no aux

        else if (v[i] < v[j])  // testar sub-vetores
            aux[k++] = v[i++]; // ordene no aux
        else
            aux[k++] = v[j++]; // ordene no aux
    }

    k = 0;                   // indice do aux
    for (i = l; i <= r; i++) // indice do v
        v[i] = aux[k++];     // copiar o aux[k] para v[i]

    // liberar memÃ³ria
    free(aux);
}
void mergesort(int *v, int l, int r)
{ // Todo: Aprender e aplicar merge sort aqui
    if (l >= r)
        return;
    int m = (r + l) / 2;
    mergesort(v, l, m);
    mergesort(v, m + 1, r);
    merge(v, l, m, r);
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
