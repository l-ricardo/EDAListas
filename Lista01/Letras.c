#include <stdio.h>
#include <string.h>

int main()
{
    char letra;
    char texto[1000];
    int numPalavrasComLetra = 0, numPalavrasSemLetra = 0;

    scanf("%c ", &letra);
    fgets(texto, sizeof(texto), stdin);

    char *palavra = strtok(texto, " ");
    while (palavra != NULL)
    {
        if (strchr(palavra, letra) != NULL)
            numPalavrasComLetra++;
        else
            numPalavrasSemLetra++;
        palavra = strtok(NULL, " ");
    }

    printf("%.1f\n", 100.0 * numPalavrasComLetra / (numPalavrasComLetra + numPalavrasSemLetra));

    return 0;
}
