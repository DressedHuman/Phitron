#include <stdio.h>

int main()
{
    unsigned int num;
    scanf("%u", &num);

    if (num % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}