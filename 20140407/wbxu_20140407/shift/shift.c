/************************************************************************/
/* 写程序用位运算求出整型变量a的16倍，(不考虑溢出)                                                                     */
/************************************************************************/
#include <stdio.h>

int 
shift(int a, int n)
{
    return a << n;
}

int
main(void)
{
    int nvar = 2;

    printf("%d %d\r\n", nvar, shift(nvar, 4));

    return 0;
}