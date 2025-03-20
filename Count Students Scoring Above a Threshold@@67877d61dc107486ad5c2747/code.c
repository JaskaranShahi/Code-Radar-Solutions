#include<stdio.h>

struct Student
{
    int roll;
    char name[100];
    float marks;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct Student st[n];
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %f", &st[i].roll, st[i].name, &st[i].marks);
        float t;
        scanf("%f", &t);
        if(st[i].marks > t)
        {
            c = c + 1;
        }
    }

    
    printf("Count of students scoring above %.0f: %d\n", t, c);

    return 0;
}

