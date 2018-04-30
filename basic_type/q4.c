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
    unsigned x, n;

    printf("非負の整数を入力:");
    scanf("%u", &x);
    printf("シフトするビット数を入力:");
    scanf("%u", &n);

    printf("\n整数=");
    print_bits(x);

    printf("\n左シフト=");
    print_bits(x << n);

    printf("\n右シフト=");
    print_bits(x >> n);

    printf("\n");

    return 0;
}
