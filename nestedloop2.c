#include<stdio.h>
int main()
{
    /* code */
    int i,j;
    for (i=0,j=1;i<8;i++,j++) //outer loop
        printf("%d + %d = %d\n", i,j, i+j);

        printf("\n");
for (i=0,j=1;i<8;i++,j++) //inner loop start
        printf("%d + %d = %d\n", i,j, i+j);

    return 0;
}
