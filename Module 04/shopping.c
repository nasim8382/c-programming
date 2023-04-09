#include <stdio.h>

int main()
{
    unsigned int N;
    scanf("%u", &N);
    if (N > 1000)
    {
        printf("I will buy Punjabi\n");
        if (N >= 1500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }    
    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}