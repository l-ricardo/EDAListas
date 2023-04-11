#include <stdio.h>

int main()
{
    int xm, ym, xr, yr;
    scanf("%d %d %d %d", &xm, &ym, &xr, &yr);
    int result = abs(xm - xr) + abs(ym - yr);

    printf("%d", result);

    return 0;
}