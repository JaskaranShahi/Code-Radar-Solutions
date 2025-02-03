#include <stdio.h>
void main()
{
    char c;
    scanf("%c", &c);
    int a,b;
    int g;
    scanf("%d %d",&a,&b);
    switch(c):
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
            printf("Error");        }
    }

}