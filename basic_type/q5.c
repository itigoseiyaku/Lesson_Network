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
void print_nbits(unsigned x, unsigned n)
{
    int i = int_bits();
    i = (n < i) ? n-1 : i-1;
    for (; i >= 0; i--)
    {
        putchar(((x>>i)&1U) ? '1' : '0');
    }
}


int main()
{
    unsigned i;
    unsigned value;

    printf("いくつまで表示しますか?\n>");
    scanf("%u", &value);

    for (int i=0; i <= value; i++)
    {
        printf("%4u ", i);
        print_nbits(i, 8);
        printf(" %06o %04X\n", i, i);
    }

    return 0;
}
