#include<stdio.h>
//prototype
void sayHi();
void sayHello(char name[]);
int main(int argc, char const *argv[])
{
    printf("without passing parameter.\n"); //this one will be executed first
    sayHi(); // calling sayHi function before passing parameter to it

    printf("Affter passing parameter in function definitio\n"); // this for 3 execution
    sayHello("Mike"); // calling it after passing parameters to it
    //Because we specified in function definition that it have to take a parameter i have to give it a string 
    sayHello("Tom");
    return 0;
}

// Function definitio start here without parameter
void sayHi() // executed as second
{
    printf("Hello User\n");
}

// with parameter
void sayHello(char name[]) // pass parameter(information to be use to do different or value we give to a function
//sayHello function will take as parameter or as input  string of character called name
{
    printf("Hello %s\n",name);
}