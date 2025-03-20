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
    int max=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %f", &st[i].roll, st[i].name, &st[i].marks);
        if(st[i].marks>max)
        {
            max=st[i].marks;
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        printf("Top Scorer: Roll Number: %d",st[i].roll"%s " st[i].name "%.2f",st[i].marks);
    }

    return 0;
}
