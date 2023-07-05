// return informatioon to whoever call it 
#include <stdio.h>

double cube(double num);
int main(int argc, char const *argv[])
{
    int num1;;
   printf("Enter positive number\n");
   scanf("%d",&num1); // &store the number
   printf("Answer: %f", cube(num1));
    return 0;
}

double cube(double num)
{

if (num>5)
{
 double result = num*num*num;
 return result;
}
else return 1;
}

    