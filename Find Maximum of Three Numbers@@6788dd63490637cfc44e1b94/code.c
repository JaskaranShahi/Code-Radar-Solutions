#include <stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d",a);
    }
    if(b>a && b>c)
    {
        printf("%d",b);
    }
    if(c>a && c>b)
    {
        printf("%d",c);
    }
    if(a==b)
    {
        if(b==c)
        {
            printf("%d",c);
        }
    }
}