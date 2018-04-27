#include <stdio.h>
#define NUM 7

int main()
{
    int x[NUM] = {0};
    int xx[NUM] = {0};
    printf("Plsease input data.\n");
    for (int i=0;i<NUM;i++)
    {
        printf("x[%d] : ",i);
        scanf("%d",&x[i]);
    }
    for (int i=0;i<NUM;i++)
    {
        xx[i] = x[NUM-1-i];
    }
    printf("Reflect finish\n");
    for (int i=0;i<NUM;i++)
    {
        printf("x[%d] : %d\n",i,xx[i]);
    }
    return 0;
}
