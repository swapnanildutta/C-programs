#include <stdio.h>
void print(char *str)
{
     int i;
     for(i=0;str[i]!='\0';i++)
     {
          printf("%c",str[i]);
     }
}
void print2(char *str)
{
     while(*str!=NULL)
     {
          printf("%c\t%u\n",*str,str);
          str++;
     }
}
int main()
{
     print("RAJDEEP");
     return 0;
}
