#include <stdio.h>

int main()
{
    int l, d;
    int k, p;
    scanf("%d %d", &l, &d);
    scanf("%d %d", &k, &p);
    int result = l / d * p + k * l;
    printf("%d", result);

    return 0;
}