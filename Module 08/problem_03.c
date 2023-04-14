#include <stdio.h>

int main()
{
    unsigned int N, V;
    scanf("%d\n", &N);
    int sum_of_even = 0;
    int sum_of_odd = 0;
    for (int i=1; i <=N; i++)
    {
        scanf("%d ", &V);
        if (V % 2 == 0)
        {
            sum_of_even = sum_of_even + V;
        }
        if(V % 2 == 1)
        {
            sum_of_odd = sum_of_odd + V;
        }
    }
    printf("%d %d", sum_of_even, sum_of_odd);
    return 0;
}