#include <stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b)
    {
        if(b==c)
        {
            printf("Equilateral");
        }
    }
     else if(a+b>c && a+c>c && b+c>a)
     {
        if(a==b || b==c || c==a )
        {
            printf("Isosceles");
        }
        else
        {
            printf("Scalene");
        }
     }
}