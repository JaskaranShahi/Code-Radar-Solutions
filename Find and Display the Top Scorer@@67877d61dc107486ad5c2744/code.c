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
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %f", &st[i].roll, st[i].name, &st[i].marks);
        if(st[i].marks > max)
        {
            max = st[i].marks;
            s = i;
        }
    }
    
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n", st[s].roll, st[s].name, st[s].marks);

    return 0;
}

