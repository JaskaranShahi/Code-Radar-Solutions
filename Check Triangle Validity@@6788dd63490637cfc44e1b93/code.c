#include <stdio.h>
void main()
{
    int a,b,c;
    sacnf("%d %d %d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (a+c)>b)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}