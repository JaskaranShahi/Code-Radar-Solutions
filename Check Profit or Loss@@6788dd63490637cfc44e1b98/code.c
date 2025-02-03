#include <stdio.h>
void main()
{
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    if(cp>sp)
    {
        printf("Loss");
    }
    if(cp<sp)
    {
        printf("Profit");
    }
    if(cp==sp)
    {
        printf("N o Profit No Loss");
    }
}