#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("-1");
        return 1;
    }

    int a[n];
    int x, y;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int s = 1000000;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int m = abs(a[i] - a[j]);
            if (m < s) {
                s = m;
                x = a[i];
                y = a[j];
                break;
            }
        }
    }
    if(x>y){
    printf("%d %d\n", y, x);
    }
    if(y>x)
    {
        printf("%d %d\n",x,y);
    }
    if(x==y)
    {
       printf("%d %d\n",x,y); 
    }
    return 0;
}
