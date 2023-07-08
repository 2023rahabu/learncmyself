#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n, i,*ptr; //static memmory

    printf("enter total n0 of values:\n");
    scanf("%d", &n); // store entered value

    ptr = (int *) malloc(n *sizeof(int)); //if n=3 allocated memory is 3*4=12

    printf("enter values:");
    for (i=0; i<n;i++)
    {
        scanf("%d", (ptr+i)); // using pointer we will store and access the addredd of memory
    }
printf("the entered values are:");
for (i=0; i<n;i++)
{
    printf("%d", *(ptr+i));
}
free(ptr);
    return 0;
}
