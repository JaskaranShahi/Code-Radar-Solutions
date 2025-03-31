#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m);

    int c=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == m)
            {
                if (c == 0 || a[i] != a[i - 1])
                {
                    printf("%d %d\n", a[i], a[j]);
                }
                c = 1;
            }
        }
    }

    return 0;
}

