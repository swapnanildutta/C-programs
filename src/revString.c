#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reverse(char *str,char *str1)
{
     int i,l=strlen(str);
     for(i=l-1;i>=0;i--)
     {
          str1[l-1-i]=str[i];
     }
}
int main()
{
     char str[20],str1[20];
     printf("Enter the String:");
     gets(str);
     reverse(str,str1);
     printf("%s",str1);
     return 0;
}

