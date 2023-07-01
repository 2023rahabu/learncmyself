#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    /* code */
    char str1[] = "Copy a string.";
     char str2[15];
     char str3[15];
     int i;

     //copy with strcpy()
     strcpy(str2,str1);
     printf("The content of str2 using strcpy: %s\n",str2);

     //copy without using strcpy90 function

    for ( i=0; str1[i]; i++)
    str3[i] = str1[i];
    str3[i] = '\0';
    printf("The content of str3 using strcpy: %s\n",str3);

     return 0;
}