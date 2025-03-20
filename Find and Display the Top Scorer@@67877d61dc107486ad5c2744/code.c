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
    int top_scorer_index = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %f", &st[i].roll, st[i].name, &st[i].marks);
        if(st[i].marks > max)
        {
            max = st[i].marks;
            top_scorer_index = i;
        }
    }
    
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n", st[top_scorer_index].roll, st[top_scorer_index].name, st[top_scorer_index].marks);

    return 0;
}

