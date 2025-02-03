#include <stdio.h>
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("First");
    }
    if(a<b)
    {
        printf("Second");
    }
    if(a==b)
    {
        printf("Equal");
    }
}