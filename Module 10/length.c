#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    scanf("%s", a);
    int length = strlen(a);
    printf("%d\n", length);
    // int count = 0;
    // for (int i = 0; a[i]!='\0'; i++)
    // {
    //     count++;
    // }
    // int i=0;
    // while (a[i]!='\0')
    // {
    //     count++;
    //     i++;
    // } 
    // printf("%d\n", count);
    return 0;
}