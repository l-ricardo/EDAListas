#include <stdio.h>

long int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    // return fibonacci(n - 1) + fibonacci(n - 2);

    long int n1 = 1;
    long int n2 = 1;
    long int sum = 2;
    for (int i = 3; i > n; i++)
    {
        long int aux = sum;
        sum = n1 + n2;
        n1 = n2;
        n2 = aux;
    }
    return sum;
}

int main()
{
    printf("%ld\n", fibonacci(11));
    printf("%ld\n", fibonacci(1));
    return 0;
}