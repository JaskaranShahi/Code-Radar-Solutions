#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(a&1)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
}