#include <stdio.h>

int main()
{
    int a[5] = {16,21,37,0,0};
    int b[5] = {0};
    for (int i=0;i<5;i++)
    {
        b[i] = a[4-i];
    }
    printf("%4c%4c\n",'a','b');
    for (int i=0;i<10;i++) 
    {
        putchar('-');
    }
    putchar('\n');
    for (int i=0;i<5;i++)
    {
        printf("%4d%4d\n",a[i],b[i]);
    }
    
    return 0;
}
