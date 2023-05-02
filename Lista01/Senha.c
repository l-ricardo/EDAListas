#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int N, M, A, K;
    int numN = 0, numM = 0, numA = 0, numK = 0;
    char senha[1000];

    scanf("%d %d %d %d", &N, &M, &A, &K);
    scanf("%s[^\n]", senha);

    numN = strlen(senha);
    for (int i = 0; i < numN; i++)
    {
        if (isupper(senha[i]))
            numA++;
        else if (islower(senha[i]))
            numM++;
        else if (isdigit(senha[i]))
            numK++;
    }

    if ((numN >= N) && (numM >= M) && (numA >= A) && (numK >= K))
        printf("Ok =/\n");
    else
        printf("Ufa :)\n");

    return 0;
}