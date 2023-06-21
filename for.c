//Converting 0 through 15 to Hex Numbers
#include<stdio.h>
int main()
{
    int i;
    printf("Hex(Uppercase) Hex(lowercase) Decimal\n");
    for(i=0; i<16;i++)
    {
        printf("%X          %x              %d\n", i,i,i);
    }
    return 0;
}