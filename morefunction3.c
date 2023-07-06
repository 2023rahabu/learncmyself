// function that print happy birthday
#include <stdio.h>

int happyBirthday(char name[], int age);

int main(int argc, char const *argv[])
{
   printf("Smile\n");
   char name1[] ="Safi";
   int  age1 = 30;
     happyBirthday(name1,age1);
    return 0;
}

int happyBirthday(char name[], int age)
{

    printf("It's your day dear %s you are %d\n",name,age);

}