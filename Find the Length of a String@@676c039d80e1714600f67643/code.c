#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    fgets(a,sizeof(a),stdin);
    int l=strlen(a);
    printf("%d",l);
}