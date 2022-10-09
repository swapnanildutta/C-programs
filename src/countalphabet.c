#include <stdio.h>
int main()
{
     char str[100];
     int i,l=0,u=0,n=0,sp=0;
     gets(str);
     for(i=0;str[i]!='\0';i++)
     {
           if(str[i]>='a' && str[i]<= 'z')
                  l++;
           else if(str[i]>='A' && str[i]<= 'Z')
                  u++;
           else if(str[i]>='0' && str[i]<= '9')
                  n++;
           else
                  sp++;
     }
     printf("The upper case %d , lower case %d , numbers %d , special char %d",u,l,n,sp);
     return 0;
}
