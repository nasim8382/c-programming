#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001], t[1001];
    scanf("%s %s", &s, &t);
    int len_of_s = strlen(s);
    int len_of_t = strlen(t);
    printf("%d %d\n", len_of_s, len_of_t);
    printf("%s %s", s, t);
    return 0;
}