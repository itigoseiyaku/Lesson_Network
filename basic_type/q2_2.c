#include <stdio.h>

int main()
{
    int vi[10] = {0};
    double vd[25] = {0};
    printf("配列viの要素数=%d\n",(unsigned)sizeof(vi)/(unsigned)sizeof(int));
    printf("配列vdの要素数=%d\n",(unsigned)sizeof(vd)/(unsigned)sizeof(double));

    return 0;
}
