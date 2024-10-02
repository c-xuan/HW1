#include<stdio.h>

int main(void)
{
    int a, b, c;
    int max, min;

    printf("Please enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;

    printf("Big Number¡G%d\n", max);
    printf("Small Number¡G%d\n", min);

    system("pause");
    return 0;
}