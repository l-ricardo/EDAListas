#include <stdio.h>

void swap(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

// int main()
// {
//     int num1 = 100, num2 = 150;
//     printf("%d %d\n", num1, num2);
//     swap(&num1, &num2);
//     printf("%d %d\n", num1, num2);
//     return 0;
// }