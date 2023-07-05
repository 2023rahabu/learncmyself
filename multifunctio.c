//Declare and define a function, called MultiTwo(), that can perform multiplicationon two integer variables.
//Call the MultiTwo() function from the main() function and pass two integers to MultiTwo()
//Then print out the result returned by the MultiTwo() function on the screen
#include <stdio.h>

int MultiTwo(int x, int y);

int main(int argc, char const *argv[])
{
 
 int x1;
 int y1;
 printf("Get the variable:\n", x1,y1);
 scanf("%d %d",&x1,&y1);
 printf("multiplication from MultiTwo of is %d\n", MultiTwo(x1,y1));
    return 0;
}

int MultiTwo(int x, int y)
{
    return (x*y);


}
