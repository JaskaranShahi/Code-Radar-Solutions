#include <stdio.h>
#include <string.h>
void main()
{
    char a[100],x[100];
    int i,j;
    fgets(a,sizeof(a),stdin);
    int l=strlen(a);
    j=0;
    for(i=l-1;i>=0;i--)
    {
        x[j]=a[i];
        j++;
    }
    if(x==a)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}