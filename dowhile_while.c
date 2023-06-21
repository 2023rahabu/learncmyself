#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int i,j;

    i = 1;
    while (i<=3)
    {
        printf("the start of iteration %d of the outer loop.\n",i);

        j=1;
    do //inner loop 
    {
     printf("the start of iteration %d of the inner loop.\n",j);
     j++;
    } 
    while (j<=4);
    i++;
    printf("the end of iteration %d of the outer loop.\n",i);
}
    return 0;
}
