#include<stdio.h>
int main(int argc, char const *argv[])
{
 char C;
 int x;
 float y;

 printf("C: address=%lu, content=%c\n", &C,C);
 printf("x: address=%p, content=%d\n", &x,x);
 printf("y: address=%p, content=%5.2f\n", &y,y);

 C = 'A';
 x = 7;
 y = 123.45;

 printf("C: address=%lu, content=%d\n", &C,C);
 printf("x: address=%p, content=%d\n", &x,x);
 printf("y: address=%p, content=%5.2f\n", &y,y);
    return 0;
}
