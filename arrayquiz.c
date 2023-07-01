//write a program to display each element of the array on the screen.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */

    int i;
   int j;
    char array_ch[6][2] = {'A','B','C','D','E','\0', 'a', 'b','c','d','e'};

    for (i=0; i<2; i++)
    {
        printf("\n");
        for (j=0; j<6; j++)
        printf("%4c", array_ch[i][j]);
}
printf("\n");
    return 0;
}
   