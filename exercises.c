#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /* code */
    char str1[] = "This is Exercise 1.";
    char str2[20];
    int i;

    strcpy(str2, str1);
    printf("print: %s\n", str2);

    //for (i=0; str1[i]; i++)
    //str2[i] = str1[i];
   // str2[i] = '\0';

   // printf(" from method 2: %s", str2);
    return 0;
}
