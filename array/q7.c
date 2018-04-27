#include <stdio.h>

int main()
{
    int A[4][3] = {0};
    int B[3][4] = {0};
    int Ans[4][4] = {0};

    //input
    for(int i=0;i<4;i++)
    {
        printf("A[%d] : ",i+1);
        scanf("%d %d %d",&A[i][0],&A[i][1],&A[i][2]);
    }
    for(int i=0;i<3;i++)
    {
        printf("B[%d] : ",i+1);
        scanf("%d %d %d %d",&B[i][0],&B[i][1],&B[i][2],&B[i][3]);
    }
    //calc
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            Ans[i][j] = A[i][0] * B[0][j] + A[i][1]*B[1][j] + A[i][2]*B[2][j];
        }
    }
    printf("\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",Ans[i][j]);
        }
        printf("\n");
    }

    

    //Show

    return 0; 
}
