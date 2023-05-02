// Todo: Misterios do MOJ
#include <stdio.h>

int main()
{
    int R, A, B;
    int n = 1;

    do
    {
        scanf("%d", &R);
        int numCartasA = 0;
        int numCartasB = 0;
        for (int i = 0; i < R; i++)
        {
            scanf("%d %d", &A, &B);
            numCartasA += A;
            numCartasB += B;
        }

        printf("Teste %d\n", n);
        n++;

        if (numCartasA > numCartasB)
            printf("Aldo\n");
        else
            printf("Beto\n");

    } while (R != 0);

    return 0;
}