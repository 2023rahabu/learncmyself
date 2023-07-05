//passing array to a function
#include <stdio.h>

int AddThree(int list[]); // function declaration compiler figure out the size for the unsized array list[]
int main(int argc, char const *argv[])
{
    /* code */
    int sum,list[3];

    printf("Enter three integers separated by spaces:\n");
    scanf("%d%d%d",&list[0], &list[1], &list[2]);
     sum = AddThree(list);
     printf(" the sum of the three integers is : %d\n", sum);
     return 0;
}
 // function definition

 int AddThree(int list[])
 {
    int i;
    int result = 0;

    for (i=0; i<3; i++)
    result += list[i];
    return result;
 }