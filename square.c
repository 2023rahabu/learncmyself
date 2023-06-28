//calculate sum of square of given input of number
#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
int n;
int number;
int sum = 0;
int i;

printf("input a number: ");
scanf("%d",&n);

printf("Enter %d number:\n", n);
for (i=0; i<n;i++)
{
scanf("%d", &number);
sum += number * number;
}
printf("sum of the square: %d\n", sum);
    return 0;
}
