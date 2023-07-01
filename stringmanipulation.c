#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    char str1[] = {'A', ' ', 's','t','r','i','n','g', ' ','c', 'o','n','s','t','a','n','t','\0'};
     char str2[] = "Another string constant";
     char *ptr_str;
     int i;

     //print out str1 one way
     for (i=0; i<18;i++)
    printf("%c", str1[i]);
    printf("\n");
//print out str1 second  way
 for (i=0; i<str1[i];i++)
     printf("%c", str1[i]);
     printf("\n");

//print out str2 one way
for (i=0; i<24;i++)
     printf("%c", str2[i]);
     printf("\n");
    //print out str2 second  way
 for (i=0; i<str2[i];i++)
     printf("%c", str2[i]);
     printf("\n");

     //assign string to a pointer
     ptr_str = "Assign a string to a pointer";
 for (i=0; *ptr_str;i++)
     printf("%c", *ptr_str++);
    return 0;
}
