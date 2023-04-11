#include <stdio.h>

int main()
{
    int carta_anterior, carta_atual;
    int cont_positivos = 0;
    int cont_negativos = 0;

    scanf("%d", &carta_anterior);

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &carta_atual);
        if ((carta_atual - carta_anterior) > 0)
            cont_positivos++;
        else
            cont_negativos++;
        carta_anterior = carta_atual;
    }

    if (cont_negativos == 0 && cont_positivos != 0) // cartas tem elementos só positivos
        printf("C");
    else if (cont_negativos != 0 && cont_positivos == 0) // cartas tem elementos só negativos
        printf("D");
    else // cartas tem elementos positivos e negativos
        printf("N");

    return 0;
}