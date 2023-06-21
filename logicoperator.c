#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int num;
    num=0;
    printf("the AND operator yields: %d\n",(num%2 == 0) && (num%3 == 0));

    num = 5;
    printf("the AND operator yields: %d\n",(num%2 == 0) && (num%3 == 0));

    num = 3;
    printf("the AND operator yields: %d\n",(num%2 == 0) && (num%3 == 0));
    
    num = 6;
    printf("the AND operator yields: %d\n",(num%2 == 0) && (num%3 == 0));

    return 0;
}
