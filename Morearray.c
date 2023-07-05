#include<stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    
    //int luckyNumbers[] ={4,8,15,16,23,42};
int luckyNumbers[10];
luckyNumbers[1] = 80;
luckyNumbers[0] = 5; // updating array index 0 which is 4

char phrase[20] = "Array";
    printf("print out %d", luckyNumbers[1]);
    printf("print out %c", phrase[20]);
    return 0;
}
