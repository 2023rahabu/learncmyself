#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    /* code */
    char str1[] = {'A', ' ', 's','t','r','i','n','g', ' ','c', 'o','n','s','t','a','n','t','\0'};
     char str2[] = "Another string constant";
     char *ptr_str;
     ptr_str = " Assign a string to a pointer.";
     int i;

     printf("The length of str1: %d bytes\n", strlen(str1));
     printf("The length of str2: %d bytes\n", strlen(str2));
     printf("The length of string assigned to ptr_str is :%d bytes\n", strlen(ptr_str));
     printf("\n");
     return 0;
}