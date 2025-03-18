#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    fgets(a,sizeof(a),stdin);
    a[strcspn(a, "\n")] = '\0';
    int l=strlen(a);
    fgets(b,sizeof(b),stdin);
    b[strcspn(b, "\n")] = '\0';
    int m=strlen(b);
    strcat(a,b);
    printf("%s",a);
}