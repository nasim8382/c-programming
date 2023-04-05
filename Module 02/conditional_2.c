#include <stdio.h>

int main()
{
    int money;
    scanf("%d", &money);
    if (money >= 100)
    {
        printf("We will eat berger");
    }
    else if (money >= 50)
    {
        printf("We will eat Fuchka...");
    }
    else if (money >= 20)
    {
        printf("We will eat Ice Cream...");
    }
    else{
        printf("We will eat nothing...");
    }
    return 0;
}

