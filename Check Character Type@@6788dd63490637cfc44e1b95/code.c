#include <stdio.h>
void main()
{
    char c;
    scanf("%c",&c);
    if(isalpha(c))
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        {
            printf("Vowel");
        }
        else
        {
            printf("Constant");
        }
    }
    else if(isdigit(c))
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }


}