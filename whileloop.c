//uses a while loop to continually read, and then display,
// character input while the character input does not equal ‘x’

#include<stdio.h>
int main()
{
    /* code */
    int c ;
    c = ' '; //initialize a space character something other than X
    printf("enter a character:\n(enter X to exist)\n");
    while (c !='X')
    {
        c = getc(stdin); //Read the character
        putchar(c); // print the character
    }
    printf("\nout of the while loop Bye!\n");
    return 0;
}
