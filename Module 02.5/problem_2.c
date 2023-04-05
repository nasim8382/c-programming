#include <stdio.h>

int main()
{
    int num_1, num_2;
    scanf("%d %d", &num_1, &num_2);
    int summation = num_1 + num_2;
    int subtraction = num_1 - num_2;
    int multiplication = num_1 * num_2;
    float division = num_1*1.0 / num_2;
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %0.2f", num_1, num_2, summation, num_1, num_2, subtraction, num_1, num_2, multiplication, num_1, num_2, division);
    // printf("%d + %d = %d\n", num_1, num_2, summation);
    // int subtraction = num_1 - num_2;
    // printf("%d - %d = %d\n", num_1, num_2, subtraction);
    // int multiplication = num_1 * num_2;
    // printf("%d * %d = %d\n", num_1, num_2, multiplication);
    // float division = num_1*1.0 / num_2;
    // printf("%d / %d = %0.2f", num_1, num_2, division);
    return 0;
}