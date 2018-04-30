#include <stdio.h>

//整数x中のセットされたビット数を返す変数
int count_bits(unsigned x)
{
    int bits = 0;
    while(x)
    {
        if(x & 1U)
        {
            bits++;
        }
        x >>= 1;
    }
    return bits;
}

//unsigned型のビット数を返す関数
int int_bits()
{
    return count_bits(~0U);
}

//unsgined型のビット内容を表示する関数
void print_bits(unsigned x)
{
    for (int i = int_bits() - 1; i >= 0; i--)
    {
        putchar(((x>>i)&1U) ? '1' : '0');
    }
}


int main()
{
    unsigned a, b;

    puts("非負の整数を2つ入力してください。");
    printf("a:");
    scanf("%u", &a);
    printf("b:");
    scanf("%u", &b);

    printf("\na = ");
    print_bits(a);
    printf("\nb = ");
    print_bits(b);
    printf("\na & b = ");
    print_bits(a&b);
    printf("\na | b = ");
    print_bits(a|b);
    printf("\na ^ b = ");
    print_bits(a^b);
    printf("\n");

    return 0;
}
