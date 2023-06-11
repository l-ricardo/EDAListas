#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

celula *busca(celula *le, int x)
{
    celula *p;
    for (p = le; p != NULL; p = p->prox)
        if (p->dado == x)
            return p;
    return NULL;
}

celula *busca_rec(celula *le, int x)
{
    if (le == NULL)
        return NULL;

    if (le->dado == x)
        return le;

    return busca_rec(le->prox, x);
}

// int main() {
//     celula* l = (celula*) malloc(sizeof(celula));
//     l->dado = 10;
//     l->prox = (celula*) malloc(sizeof(celula));
//     l->prox->dado = 4;
//     l->prox->prox = (celula*) malloc(sizeof(celula));
//     l->prox->prox->dado = -9;
//     l->prox->prox->prox = (celula*) malloc(sizeof(celula));
//     l->prox->prox->prox->dado = 2;
//     l->prox->prox->prox->prox = (celula*) malloc(sizeof(celula));
//     l->prox->prox->prox->prox->dado = 7;
//     l->prox->prox->prox->prox->prox = (celula*) malloc(sizeof(celula));
//     l->prox->prox->prox->prox->prox->dado = 10;
//     l->prox->prox->prox->prox->prox->prox = NULL;

//     // Teste da função busca
//     celula* resultado = busca(l, -9);
//     if (resultado != NULL) {
//         printf("Valor encontrado: %d\n", resultado->dado);
//     } else {
//         printf("Valor nao encontrado.\n");
//     }

//     // Teste da função busca_rec
//     resultado = busca_rec(l, 7);
//     if (resultado != NULL) {
//         printf("Valor encontrado: %d\n", resultado->dado);
//     } else {
//         printf("Valor nao encontrado.\n");
//     }

//     // Libera a memória alocada para a lista encadeada
//     celula* p = l;
//     while (p != NULL) {
//         celula* aux = p->prox;
//         free(p);
//         p = aux;
//     }

//     return 0;
// }
