#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int num;

    printf("enter a single digit that can be divided\n by both 2 and 3:\n");
    for (num=1; (num%2 !=0) || (num%3 !=0);)
    num = getchar()-'0';
    printf("you got such number:%d\n", num);
    return 0;
    }