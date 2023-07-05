#include<stdio.h>
#include <stdarg.h>

double AddDouble (int x, ...); //function declaration means first argument to adddouble()is integer
// Does va_arg() fetch each argument in the same order (that is, from left to right)
//of the argument list passed to AddDouble()?
int main()
{
    double d1 = 1.5;
    double d2 = 2.5;
    double d3 = 3.5;
    double d4 = 4.5;

    printf("Given an argument: %2.1f\n", d1);
    printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(1,d1));

    printf("Given an argument: %2.1f and %2.1f\n", d1,d2);
    printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(2,d1,d2));

    printf("Given an argument: %2.1f,%2.1f and %2.1f\n", d1,d2,d3);
    printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(3,d1,d2,d3));

    printf("Given an argument: %2.1f, %2.1f,%2.1f and %2.1f\n", d1,d2,d3,d4);
    printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(4,d1,d2,d3,d4));
    return 0;
}
// Definition od AddDouble function
double AddDouble(int x, ...)
{
    va_list arglist;
    int i;
    double argument, result = 0.0;
    printf ("the number of arguments is : %d\n",x);
    va_start(arglist,x);
     for (i=0; i<x; i++)
     {
     argument = va_arg(arglist, double);
     printf("Argument passed to this function: %f\n",argument);
     result += argument;
}
     va_end (arglist);
     return result;
}