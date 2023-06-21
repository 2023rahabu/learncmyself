#include<stdio.h>
int main(int argc, char const *argv[])
{
  int i;

  printf("enter a number that can be divided by 2 and 6\n");
  i = getchar();
 if((i%2 == 0) && (i%3 == 0))
    printf(" YES U GOT IT: %d\n",i);
 else
 
printf("enter a valid number\n");
 
}