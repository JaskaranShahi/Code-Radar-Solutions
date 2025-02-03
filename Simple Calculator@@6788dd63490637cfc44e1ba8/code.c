#include <stdio.h>
#include <ctype.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char c;
    scanf("%c",&c);
    switch(c)
    {
        case '+':
            printf("%d",(a+b));
            break;
        
        case '-':
            printf("%d",(a-b));
            break;

        case '*':
            printf("%d",(a*b));
            break;

        case '/':
            if (b==0){
                printf("error");
            }else{
                printf("%d",(a/b));
            }
            break;
        
        default:
            printf("error");
            break;      
    }
    return 0;

}