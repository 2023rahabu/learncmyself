#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */

    int i;
   int size;
   char list_ch[][2] = {'1','2','3','4','5','6','a','b','c','d','e','f'};

   size = sizeof(char);
   printf("the total bytes are %d",size);
printf("\n");
   for(i=0; i<6;i++)
  

printf("%c %c\n", list_ch[i][0],list_ch[i][1]);

   return 0;
}

