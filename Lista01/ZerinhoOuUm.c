#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a != b && a != c)
        printf("A\n");
    else if (b != a && b != c)
        printf("B\n");
    else if (c != b && c != a)
        printf("C\n");
    else
        printf("empate\n");

    return 0;
}