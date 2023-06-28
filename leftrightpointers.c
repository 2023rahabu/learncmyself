#include <stdio.h>
int main()
{
int x, y, z;
x = 512;
y = 1024;
z = 2048;

printf("The left value of x, y,z are:\n");

printf("0x%p,0x%p,0x%p\n", &x,&y,&z);

printf("The right values of x, y, and z are:\n");
printf("%d, %d, %d\n", x, y, z);
return 0;
}