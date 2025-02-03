#include <stdio.h>
void main()
{
    char c;
    scanf("%c",&c);
    int a,b;
    int g;
    scanf("%d %d",&a,&b);
    if(c=='+')
    {
        g=a+b;
        printf("%d",g);
    }
    if(c=='-')
    {
        g=a-b;
        printf("%d",g);
    }
    if(c=='*')
    {
        g=a*b;
        printf("%d",g);
    }
    if(c=='/')
    {
        g=a/b;
        printf("%d",g);
    }

}