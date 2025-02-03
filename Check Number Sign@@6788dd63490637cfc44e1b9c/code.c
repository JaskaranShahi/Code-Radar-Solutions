#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(a<0)
    {
        printf("Negative");
    }
    if(a>0)
    {
        printf("Positive");
    }
    if(a==0)
    {
        printf("Zero");
    }
}