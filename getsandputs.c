#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    char str[80];
     int i;
     int delt = 'a' - 'A';

     printf("enter a string less than 80 characters:\n");
     gets(str);
     i = 0;
     while (str[i])
     {
        if ((str[i] >= 'a') && (str[i] <= 'z'))
        str[i] -= delt; // convert to upper case
        i++;
     }
printf ("The entered string is (in uppercase):\n");
puts(str);
return 0;
}