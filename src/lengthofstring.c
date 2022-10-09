#include <stdio.h>
int main()
{
     char str[5];
     int i;
     scanf("%s",str);
     for(i=0;str[i]!='\0';i++);
     printf("%d",i);
     printf("%d",printf("%s",str));
     return 0;
}
