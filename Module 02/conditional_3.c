#include <stdio.h>

int main()
{
    int money;
    scanf("%d", &money);
    if (money >= 5000)
    {
        printf("We will go to Coxbazar...\n");

        if (money >= 10000)
        {
            printf("We will go to Saintmartin...");
        }
        else
        {
            printf("We will come back to home...");
        }
    }
    else
    {
        printf("We won't go anywhere...");
    }
    return 0;
}