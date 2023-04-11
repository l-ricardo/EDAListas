#include <stdio.h>

int main()
{
    int a, b, c, x, y, z;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &x, &y, &z);
    int j = x / a;
    int k = y / b;
    int l = z / c;
    printf("%d", j * k * l);

    return 0;
}