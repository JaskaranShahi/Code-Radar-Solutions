#include <stdio.h>
#include <string.h>
void main()
{
    char a[50],char b[50],char c[100];
    scanf("%s %s",&a,&b);
    strcpy(c,a);
    strcat(c," and ");
    strcat(c,b);
    printf("%s",c);

}