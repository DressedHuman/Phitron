#include<stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 5000)
    {
        printf("Cox's Bazar jabo\n");
        if(tk >= 10000)
        {
            printf("Saint Martin jabo");
        }
        else{
            printf("Ferot asbo");
        }
    }
    else
    {
        printf("Kothao jabo na");
    }
}