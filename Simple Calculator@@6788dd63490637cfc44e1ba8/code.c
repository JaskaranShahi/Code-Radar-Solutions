#include <stdio.h>
void main()
{
    char c;
    scanf("%c", &c);
    int a,b;
    scanf("%d %d",&a,&b);
    if(c== '+')
    {
        int g=a+b;
        printf("%d",g);
    }
    else if(c== '-')
    {
        int h=a-b;
        printf("%d",h);
    }
    else if(c== '*')
    {
        g=a*b;
        printf("%d",g);
    }
    else if(c== '/')
    {
        g=a/b;
        printf("%d",g);
    }
    else
    {
        printf("Error");
    }

}