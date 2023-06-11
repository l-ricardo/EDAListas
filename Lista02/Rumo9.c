#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void somaDigitos(char *num)
{
    int sum = 0;
    for (int i = 0; num[i] != '\0'; i++)
    {
        int aux = num[i] - '0';
        sum += aux;
    }
    sprintf(num, "%d", sum);
}

int main()
{
    char num[1000];
    while (scanf("%s", num) && num[0] != '0')
    {
        int degree = 0;
        printf("%s is", num);

        if (strlen(num) == 1)
            degree = 1;

        while (strlen(num) != 1)
        {
            somaDigitos(num);
            degree++;
        }

        if (num[0] == '9')
            printf(" a multiple of 9 and has 9-degree %d.\n", degree);
        else
            printf(" not a multiple of 9.\n");
    }

    return 0;
}