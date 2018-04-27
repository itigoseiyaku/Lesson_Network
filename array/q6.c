#include <stdio.h>
#define NMAX 80

int main()
{
    int score[NMAX] = {0};
    int graph_score[11] = {0};
    int Nofs = 0;//Number of Student
    printf("Please input number of student\n");
    scanf("%d",&Nofs);
    //Out of range
    for(;Nofs>=NMAX || Nofs < 1;)
    {
        printf("Please input number of student\n");
        scanf("%d",&Nofs);
        printf("Please enter a number smaller than %d Student.\n",NMAX);
    }
    //input
    printf("Please input score of %d student\n",Nofs);
    for(int i=0;i<Nofs;i++)
    {
        printf("No.%2d : ",i+1);
        scanf("%d",&score[i]);
        if(score[i] < 0 || score[i] > 100)
        {
            printf("Input score is wrong num\nplease reenter\n");
            i -= 1;
            continue;
        }
    }
    for(int i=0;i<Nofs;i++)
    {
        if(score[i] < 0 || score[i] > 100)
        {
            printf("Error!!\n");
            return -1;
        }
        graph_score[score[i]/10]++;
    }
    //Show Graph
    printf("\n------- Graph -------\n");
    for(int i=0;i<11;i++)
    {
        if(i<10)
        {
            printf("%3d~%3d : ",i*10,(i+1)*10-1);
        }
        else
        {
            printf("   ~%3d : ",100);
        }
        for(int j=0;j<graph_score[i];j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
