#include<stdio.h>
int main()
{
    /* code */
    int i, j;

    for(i=1; i<=3; i++) // print this after printing the inner part //iraprinting iyi program incuro 3
    {
        printf("the start of iteration %d of the outer loop.\n",i);
        for (j=1; j<=4; j++) //program will print this first // irajya iva kuri 1 igere kuri 4
        printf(" Iteration %d of the inner loop.\n", j);
        printf("The end of iteration %d of the outer loop.\n", i);
    }
    return 0;
}
