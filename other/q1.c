#include <stdio.h>
#include <string.h>

int main()
{
    int dec = 0;
    char bin[100] = "";

    int i = 0;
    

    printf("変換前の10進数\n>");
    scanf("%d", &dec);

    for(i = 0;dec>0;i++)
    {
        printf("%4d ÷ 2 = %4d あまり %1d\n",dec,dec/2,dec%2);
        strcat(bin,(dec%2==0?"0":"1"));
        dec = dec/2;
    }
    printf("変換後の2進数 = ");
    for (i--;i>0;i--)
    {
        printf("%c",bin[i]);
    }
    printf("\n");
    
    return 0;
}
