#include <stdio.h>
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=b*b;
    if(c==a)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}