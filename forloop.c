//Adding Multiple Expressions to the for Statement
#include<stdio.h>
int main()
{
    /* code */
    int i ,j;

    for (i=0, j=8; i<8; i++, j--)
    printf("%d + %d = %d\n", i,j,i+j);
    return 0;
}
