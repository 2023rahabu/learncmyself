// cprogram that prompt user to enter a number that are divideb by both 2 and3 
//and if user got that number it should print yes you get it else it prompt user to enter valid number .
//if user enterred wrong number 4 times system should quit

#include<stdio.h>
int main()
{
    /* code */
    int attempts = 0;
    int number;

    while (attempts < 4)
    {
    printf("Enter a number divisible by both 2 and 3: ");
    scanf("%d",&number);

    if(number % 2 == 0 && number % 3 == 0)
    {
        printf("YES YOU GOT IT!\n");
        break;
    }
    else
    {
        printf("Invalid number. Please try again.\n");
        attempts++;
    }
    }

if (attempts >= 4)
{
    printf("you exceeded the maximum number of attempts. quittings..\n");
}

return 0;
}

