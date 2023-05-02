#include <stdio.h>
#include <string.h>

int main()
{
    char frase[1000];
    scanf("%s[^\n]", frase);
    printf("%d\n", strlen(frase));

    return 0;
}