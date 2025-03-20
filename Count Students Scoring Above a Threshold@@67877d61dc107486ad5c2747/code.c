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
    float avg = 0;
    float s;
    float t;
    int c=0;
    scanf("%d",&t;)
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %f", &st[i].roll, st[i].name, &st[i].marks);
        if(st[i].marks>t)
        {
            c=c+1;
        }
    }
    printf("Count of students scoring above %d: %c",c);

    return 0;
}