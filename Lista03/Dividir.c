#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void divide_lista(celula *l, celula *l1, celula *l2)
{
    celula *p, *p1, *p2;
    for (p = l; p != NULL; p = p->prox)
    {
        if (p->dado % 2)
            l1->prox = p;
        else
            l2->prox = p;
    }
}

int main()
{
    celula *l = (celula *)malloc(sizeof(celula));
    celula *l1 = (celula *)malloc(sizeof(celula));
    celula *l2 = (celula *)malloc(sizeof(celula));
    l->dado = 10;
    l->prox = (celula *)malloc(sizeof(celula));
    l->prox->dado = 4;
    l->prox->prox = (celula *)malloc(sizeof(celula));
    l->prox->prox->dado = -9;
    l->prox->prox->prox = (celula *)malloc(sizeof(celula));
    l->prox->prox->prox->dado = 2;
    l->prox->prox->prox->prox = (celula *)malloc(sizeof(celula));
    l->prox->prox->prox->prox->dado = 7;
    l->prox->prox->prox->prox->prox = (celula *)malloc(sizeof(celula));
    l->prox->prox->prox->prox->prox->dado = 10;
    l->prox->prox->prox->prox->prox->prox = NULL;

    // Teste da função divide
    divide_lista(l, l1, l2);

    celula *p = l1;
    while (p != NULL)
        printf("l1: %d\n", p->dado);
    p = l2;
    while (p != NULL)
        printf("l2: %d\n", p->dado);

    // Libera a memória alocada para a lista encadeada
    p = l;
    while (p != NULL)
    {
        celula *aux = p->prox;
        free(p);
        p = aux;
    }

    return 0;
}
