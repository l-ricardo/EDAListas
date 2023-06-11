#include <stdio.h>

void moveX(char *letra)
{
    if (*letra == '\0')
    {
        return;
    }
    else if (*letra != 'x')
    {
        printf("%c", *letra);
        moveX(letra + 1);
    }
    else
    {
        moveX(letra + 1);
        printf("x");
    }
}

int main()
{
    char frase[100];
    gets(frase);
    moveX(frase);

    return 0;
}