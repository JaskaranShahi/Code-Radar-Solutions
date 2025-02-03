#include <stdio.h>
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char c;
    scanf("%c", &c);
    int g;
    int h;
    h=a*b;
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
            
            printf("%d",h);
            break;
        }
        case '/':
        {
            g=a/b;
            printf("%d",g);
            break;
        }
        default:
            printf("error");
            break;      
        
    }

}