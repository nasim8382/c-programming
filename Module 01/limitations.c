#include <stdio.h>

int main()
{
    int a = 1000000000;
    long long int b = 10000000000000;
    float c = 23.453322;
    double d = 2.456789341234567;
    // printf("%d", a);
    // printf("%lld", b);
    // printf("%f", c);
    printf("%0.15lf", d);
    return 0;
}