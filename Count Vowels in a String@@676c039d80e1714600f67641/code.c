#include <stdio.h>
#include <string.h>
void main()
{
    char a[100];
    int l,c;
    fgets(a, sizeof(a), stdin);
    length = strlen(str);
    c = 0;
    for(i =0; i<length; i++)
    {
        char b=a[i];
        if(b=='a' || b=='e'||b=='i'||b=='o'||b=='u'|b=='A' || b=='E'||b=='I'||b=='O'||b=='U')
        {
            c=c+1;
        }
    }
    printf("%d", c);
}