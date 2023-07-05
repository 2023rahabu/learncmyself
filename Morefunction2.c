// passing more that one parameters  
#include<stdio.h>
//prototype
void sayHello(char name[],int age);
int main()
{
    sayHello("Mike",40); 
    sayHello("Tom",23);
    return 0;
}
// Function definition start here with parameter
void sayHello(char name[], int age) 
{
    printf("Hello %s you are %d\n",name,age);
}