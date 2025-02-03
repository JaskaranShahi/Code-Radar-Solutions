#include <stdio.h>
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char c;
    scanf("%c", &c);
    int g;
    switch(c)
    {
        case '+':
        {
            g=a+b;
            printf("%d",g);
            break;
        }
        case '-':
        {
            g=a-b;
            printf("%d",g);
            break;
        }
        case '*':
        {
            g=a*b;
            printf("%d",g);
            break;
        }
        case '/':
        {
            g=a/b;
            printf("%d",g);
            break;
        }
        default:
        {
            printf("Error");        
        }
    }

}