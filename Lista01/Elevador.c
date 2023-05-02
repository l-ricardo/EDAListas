#include <stdio.h>

int main()
{
    int N, C, S, E;
    int numPessoasDentro = 0;
    char result = 'N';

    scanf("%d %d", &N, &C);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &S, &E);
        numPessoasDentro = numPessoasDentro + E - S;
        if (numPessoasDentro > C)
        {
            result = 'S';
        }
    }
    printf("%c\n", result);

    return 0;
}