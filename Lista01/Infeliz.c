#include <stdio.h>
#include <string.h>

int main()
{
    int n, instancia = 1;
    while (scanf("%d", &n) != EOF)
    {
        char nome[20], nomeReprovado[20];
        int nota, notaReprovado;

        scanf("%s %d", nomeReprovado, &notaReprovado);

        for (int i = 1; i < n; i++)
        {
            scanf("%s %d", nome, &nota);
            if ((nota < notaReprovado) || (nota == notaReprovado && strcmp(nomeReprovado, nome) < 0))
            {
                strcpy(nomeReprovado, nome);
                notaReprovado = nota;
            }
        }
        printf("Instancia %d\n%s\n\n", instancia, nomeReprovado);
        instancia++;
    }
    return 0;
}
