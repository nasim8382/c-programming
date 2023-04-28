#include <stdio.h>

int main()
{
    char a[5];
    for (int i=0; i<5; i++)
    {
        scanf("%c", &a[i]);
    }
    for (int i=0; i<5; i++)
    {
        printf("%c\n", a[i]);
    }

    int b[6];
    int sz= sizeof(b)/sizeof(int);
    printf("%d", sz);
    return 0;
}