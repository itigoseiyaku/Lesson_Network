#include <stdio.h>
#define N 5

int main()
{
    int score[N] = {0};
    int sum = 0;
    printf("Please input socre\n");
    for(int i=0;i<N;i++)
    {
        printf("No.%d : ",i+1);
        scanf("%d",&score[i]);
    }
    for(int i=0;i<N;i++)
    {
        sum += score[i];
    }
    printf("SUM:%d\nAVE:%.1f\n",sum,(float)sum/(float)N);
    return 0;
}
