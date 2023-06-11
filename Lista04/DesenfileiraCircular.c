#include <stdio.h>
#include <stdlib.h>

typedef struct fila
{
    int *dados;
    int N, p, u;
} fila;

int desenfileira(fila *f, int *y)
{
    if (f == NULL || f->p >= f->u) // Caso vazia
        return 0;

    *y = f->dados[f->p];
    f->p = (f->p + 1) % f->N;
    return 1;
}

int main()
{
    fila f;
    int tam = 5;

    f.dados = (int *)malloc(tam * sizeof(int));
    f.N = tam;
    f.p = f.u = 0;

    // Insere alguns valores na fila
    for (int i = 0; i < tam; i++)
        f.dados[f.u++] = i;

    // Desenfileira os valores e imprime-os
    int valor;
    while (desenfileira(&f, &valor))
    {
        printf("Valor desenfileirado: %d\n", valor);
    }

    return 0;
}