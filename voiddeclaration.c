#include <stdio.h>
#include <time.h>

void GetDateTime(void); // prototype function declaration and show that function return no value

int main(int argc, char const *argv[])
{
    /* code */
    printf ("Before the GetDateTime() function is called.\n");
    GetDateTime(); //function call no argument should be passed because function prototype is void
    printf("After the GetDateTime() function is called.\n");
    return 0;
}

//GetDateTime() definition
void GetDateTime(void)
{
    time_t now;

    printf("within GetDateTime().\n");
    time(&now);
    printf("Current date and time is : %s\n", asctime(localtime(&now))); //asctime(localtime(&now))obtain local time
    // by calling locatime() and convert the local time into a character string with help from asctime()
}