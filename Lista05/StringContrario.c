#include <stdio.h>
#include <stdlib.h>

char *pilha;
int topo;

void criar(int N)
{
    pilha = malloc(N * sizeof *pilha);
    topo = 0;
}
void empilha(char letra)
{
    pilha[topo++] = letra;
}
char desempilha()
{
    return pilha[--topo];
}

int main()
{
    char letra;
    criar(500);

    while (scanf("%c", &letra) == 1 && letra != '\0' && letra != '\n')
        empilha(letra);

    while (topo != 0)
        printf("%c", desempilha());

    free(pilha);
    return 0;
}
