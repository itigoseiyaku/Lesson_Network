#include <stdio.h>
#define N 5

int main()
{
    int score[N] = {0};
    int max = 0;
    int min = 27999;
    printf("Please input socre\n");
    for(int i=0;i<N;i++)
    {
        printf("No.%d : ",i+1);
        scanf("%d",&score[i]);
    }
    for(int i=0;i<N;i++)
    {
        if (max<score[i])
        {
            max = score[i];
        }
        if(min > score[i])
        {
            min = score[i];
        }
    }
    printf("MAX:%d\nMIN:%d\n",max,min);
    return 0;
}
