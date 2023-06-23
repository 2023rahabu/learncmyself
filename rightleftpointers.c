//Given three integer variables, x = 512, y = 1024, and z = 2048, write a program
//to print out their left values as well as their right values

#include <stdio.h>

int main() {
    int x = 512;
    int y = 1024;
    int z = 2048;

    // Pointers to store the memory addresses of the variables
    int *ptrX = &x;
    int *ptrY = &y;
    int *ptrZ = &z;

    printf("Left values:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    printf("Right values (in binary):\n");
    printf("x = %p\n", ptrX);  // Print the memory address of x
    printf("y = %p\n", ptrY);  // Print the memory address of y
    printf("z = %p\n", ptrZ);  // Print the memory address of z

    return 0;
}
