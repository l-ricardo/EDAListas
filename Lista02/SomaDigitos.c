#include <stdio.h>

long long int sumDigits(long long int n)
{
    long long int fimNum = n % 10;
    long long int comecoNum = n / 10;
    if (comecoNum == 0)
        return fimNum;
    return fimNum + sumDigits(comecoNum);
}

int main()
{
    long long int num;
    scanf("%lld", &num);
    printf("%lld\n", sumDigits(num));

    return 0;
}