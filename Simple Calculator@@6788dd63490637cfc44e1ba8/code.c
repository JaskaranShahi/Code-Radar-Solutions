#include <stdio.h>
void main()
{
    char c;
    scanf("%c",&c);
    int a,b;
    int d;
    scanf("%d %d",&a,&b);
    if(c=='+')
    {
        d=a+b;
        printf("%d",d);
    }
    if(c=='-')
    {
        d=a-b;
        printf("%d",d);
    }
    if(c=='*')
    {
        d=a*b;
        printf("%d",d);
    }
    if(c=='/')
    {
        d=a/b;
        printf("%d",d);
    }

}