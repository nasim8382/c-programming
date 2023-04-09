#include <stdio.h>

int main()
{
    int X, firstDigit;
    scanf("%d", &X);
    firstDigit = X / 1000;
    if (firstDigit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}