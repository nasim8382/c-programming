#include <stdio.h>

int main()
{
    // char a[7] = {'N','a','h','i','y','a','n'};
    char a[7] = "Mehmud";
    // char a[] = "Mehmud\0";
    int sz= sizeof(a)/sizeof(char);
    printf("%d\n", sz);
    // for (int i=0; i<6; i++)
    // {
    //     printf("%c\n", a[i]);
    // }
    printf("%s",a);
    return 0;
}