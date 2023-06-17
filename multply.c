#include <stdio.h>
//function that add two numbers//

int integer_multiply(int x, int y)
{
    int result;
    result = x*y;
    return result;
}
int main()
{

int quotient = integer_multiply(5, 12);
printf("The quotient of 5 and 12 is %d.\n", quotient);
return 0;

}