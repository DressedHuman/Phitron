#include<stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk>=100)
    {
        printf("Burgar khabo");
    }
    else if(tk>=50)
    {
        printf("Fuchka khabo");
    }
    else if(tk >= 20)
    {
        printf("Ice cream khabo\nBashay jabo:(");
    }
    else
    {
        printf("Kichu khabo na");
    }
    return 0;
}