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

void sort_list(Student a[],int n,int type)
{
    //type
    //0:身長
    //1:名前
    //2:体重
    int i, j;
    for(i = 0; i < n - 1;i++)
    {
        for(j = n - 1; j > i; j--)
        {
            if(
                ( type == 0 && a[j-1].height > a[j].height ) ||
                ( type == 1 && strcmp(a[j-1].name,a[j].name) > 0) || 
                ( type == 2 && a[j-1].weight > a[j].weight )
              )
            {
                swap_Student(&a[j-1], &a[j]);
            }
        }
    }
}

int main()
{
    //initialize
    int i;
    Student std[NUMBER];
    int sorttype = 0;

    //input
    for (i = 0; i < NUMBER; i++)
    {
        printf("%d番目の学生\n",i+1);
        printf("名前：");
        scanf("%s",std[i].name);
        printf("身長：");
        scanf("%d",&std[i].height);
        printf("体重：");
        scanf("%f",&std[i].weight);
    }

    //select sort
    puts("");
    puts("どのデータでソートしますか?");
    puts("0:身長,1:名前,2:体重");

    scanf("%d", &sorttype);
    
    //sort
    sort_list(std, NUMBER,sorttype);


    //output
    switch(sorttype)
    {
        case 0:
            puts("身長順にソートしました");
            break;
        case 1:
            puts("名前順にソートしました");
            break;
        case 2:
            puts("体重順にソートしました");
            break;
    }

    for(i = 0; i < NUMBER;i++)
    {
        printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);
    }
    return 0;
}
