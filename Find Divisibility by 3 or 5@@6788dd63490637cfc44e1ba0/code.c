#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%5==0)
    {
        printf("Divisible by Both");
    }
    else if(a%5==0)
    {
        printf("Divisible by 5");
    }
    else if(a%3==0)
    {
        printf("Divisible by 3");
    }
    else
    {
        printf("Not Divisible");
    }
}