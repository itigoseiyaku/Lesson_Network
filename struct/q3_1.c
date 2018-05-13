#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
} Student;

void swap_Student(Student *x, Student *y)
{
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Student a[],int n)
{
    int i, j;

    for(i = 0; i < n - 1;i++)
    {
        for(j = n - 1; j > i; j--)
        {
            if(a[j-1].height > a[j].height)
            {
                swap_Student(&a[j-1], &a[j]);
            }
        }
    }
}

int main()
{
    int i;
    Student std[] = {
        {"学生A", 178, 61.2},
        {"学生B", 175, 62.5},
        {"学生C", 173, 86.2},
        {"学生D", 165, 72.3},
        {"学生E", 168, 64.2},
    };

    for (i = 0; i < NUMBER; i++)
    {
        printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);
    }

    sort_by_height(std, NUMBER);

    puts("\n身長順にソートしました");
    for(i = 0; i < NUMBER;i++)
    {
        printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);
    }
    return 0;
}
