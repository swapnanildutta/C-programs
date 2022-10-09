#include <stdio.h>
int main()
{
     char str[100];
     int i,j,c=1;
     scanf("%s",str);
     for(i=0;str[i]!='\0';i++);
     for(j=0;j<i/2;j++)
     {
          if(str[j]!=str[i-1-j])
          {
              c=0;
              break;
          }
     }
     if(c==1)
         printf("Its is palindrome");
     else
         printf("Not palindrome");
     return 0;
}
