#include <stdio.h>
#include<ctype.h>
void main()
{
    char c;
    scanf("%c",&c);
    if(isalpha(c))
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Constant\n");
        }
    }
    else if(isdigit(c))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }


}