//displays the characters A through G by using a do-while loop
//to repeat the printing and adding

#include<stdio.h>
int main()
{
    /* code */
    int i=65; //initializes the integer variable i with 65 as an integer value
    do
    {
        /* code */
        printf("the numeric value of %c is %d.\n", i,i);
        i++;
    } while (i<72); /* condition */
//When the expression evaluates to 0 after i is
//increased to 72 (i then equals 72 and is therefore not less than 72), the do-while loop is
//terminated immediately.
    return 0;
}
