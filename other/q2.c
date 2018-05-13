#include <stdio.h>

int main()
{
    int dec = 0;
    char bin[100] = "";

    int i = 0;
    int weight = 1;
    

    printf("変換前の2進数\n>");
    scanf("%s", bin);

    for (i = 0;i < 100;i++)
    {
        if(bin[i] == '\0')
        {
            i--;
            break;
        }
    }
    for (;i>=0;i--)
    {
        int val = weight * (bin[i]=='1'?1:0);
        printf("桁の重み%d × 桁の数値 %c = %d\n",weight,bin[i],val);
        weight *= 2;
        dec += val;
    }
    printf("変換後の10進数 = %d \n",dec);
    
    return 0;
}
