#include <stdio.h>
#include <limits.h>

int main()
{
    puts("使用環境でのchar型, int型の範囲の確認");
    printf("char : %d〜%d\n", CHAR_MIN, CHAR_MAX);
    printf("int : %d〜%d\n", INT_MIN, INT_MAX);

    return 0;
}
