// making function calls
#include <stdio.h>

int function_1(int x, int y); //function declaration with prototype with 2 int variable xand y

double function_2(double x, double y) // function 2 defined before it's called 
{
    printf ("Within function_2.\n");
    return (x - y);
}// end of function 2 definition 

int main(int argc, char const *argv[])
{
  int x1 = 80;
  int y1 = 10;
  double x2 = 100.123456;
  double y2 = 10.123456;

  printf("Pass function_1 %d and %d.\n", x1,y1); // value of x1,y1 are passedto the function 1
  printf(" function_1 return %d.\n", function_1(x1,y1)); //call function 1
  printf("Pass function_2 %f and %f.\n", x2,y2);// value of x2,y2 are passed to the function 2
  printf(" function_2 return %f.\n", function_2(x2,y2)); // call function 2
  return 0;
}

// function_1 definition showing that it can perfornm addition and print out the string of within function 1
int function_1(int x, int y)
{
    printf("Within function_1.\n");
    return (x+y);
}
