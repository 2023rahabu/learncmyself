#include<stdio.h>
int main()
{
    /* code */
    int c;
    
    printf("enter character:\n(enter k to exit)\n");
    c = ' ';

    while ( c  != 'K')
    {
    c = getc(stdin);
    putchar(c);
}
printf("\nouter of the loop. Bye\n");
    return 0;
}
