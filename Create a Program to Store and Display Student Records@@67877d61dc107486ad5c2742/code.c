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
    float max = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %f", &st[i].roll, st[i].name, &st[i].marks);
    }
    for(int i=0;i<n;i++)
    {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", st[i].roll, st[i].name, st[i].marks);
    }

    return 0;
}
