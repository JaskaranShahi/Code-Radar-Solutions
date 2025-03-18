#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    fgets(a,sizeof(a),stdin);
    int l=strlen(a);
    fgets(b,sizeof(b),stdin);
    int m=strlen(m);
    strcat(a,b);
    printf("%s",a);
}