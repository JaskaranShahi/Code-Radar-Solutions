#include <stdio.h>
#include <string.h>
void main()
{
    char a[50],b[50],c[100];
    scanf("%s %s",&a,&b);
    strcpy(c,a);
    strcat(c," and ");
    strcat(c,b);
    printf("You entered: %s",c);

}