#include <stdio.h>
int main()
{
     char str[10],strrev[10];
     int i,j;
     scanf("%s",str);
     for(i=0;str[i]!='\0';i++);
     for(j=0;j<i;j++)
          strrev[j]=str[i-1-j];
     for(j=0;j<i;j++)
          printf("%c",strrev[j]);
     return 0;
}
