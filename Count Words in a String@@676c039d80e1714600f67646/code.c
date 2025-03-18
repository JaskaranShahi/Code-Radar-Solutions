#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    fgets(a,sizeof(a),stdin);
    int l=strlen(a);
    int s=0;
    a[l] = ' ';    
    a[l + 1] = '\0';
    for(int i=0;i<l;i++)
    {
        char c=a[i];
        if(c==' ')
        {
            s=s+1;
        }
        else
        {
            continue;
        }
    }
    printf("%d",s+1);
}