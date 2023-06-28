#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int total_byte;
    int list_int[10];

    total_byte = sizeof(int) *10;

    printf(" the size of int is %d-byte long.\n", sizeof (int));
    printf("the array of 10 ints has total %d bytes.\n", total_byte);
    printf("the address of  first element:  %p\n", &list_int[0]);
    printf("the address of  last element:  %p\n", &list_int[9]);
    return 0;
}


