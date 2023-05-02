#include <stdio.h>
#include <string.h>

int main()
{
    char frase[1000];
    scanf("%s[^\n]", frase);

    for (int i = strlen(frase) - 1; i >= 0; i--)
        printf("%c", frase[i]);

    return 0;
}