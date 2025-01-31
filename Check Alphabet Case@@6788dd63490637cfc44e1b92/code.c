#include <stdio.h>
void main()
{
    char c;
    scanf("%c",&c);
    if(isupper(c))
    {
        printf("Uppercase");
    }
    else if(islower(c))
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }
}