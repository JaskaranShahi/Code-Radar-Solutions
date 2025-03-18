#include <stdio.h>
#include <string.h>
void main()
{
    char a[100];
    int l,c;
    fgets(a, sizeof(a), stdin);
    l = strlen(a);
    c = 0;
    for(int i =0; i<l; i++)
    {
        char b=a[i];
        if(b=='a' || b=='e'||b=='i'||b=='o'||b=='u'|b=='A' || b=='E'||b=='I'||b=='O'||b=='U')
        {
            c=c+1;
        }
    }
    printf("%d", c);
}