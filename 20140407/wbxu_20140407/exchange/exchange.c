/************************************************************************/
/* ��λ����ʵ���������Ľ���                                                                     */
/************************************************************************/

#include <stdio.h>

void
exchange(int *x, int *y)
{
    *x = *x ^ *y;  //
    *y = *x ^ *y;  // 
    *x = *x ^ *y;  //
}

int
main(void)
{
    int x = 3;
    int y = 5;

    exchange(&x, &y);

    return 0;
}