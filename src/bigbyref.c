#include <stdio.h>
int big(int *a,int *b)
{
      int c;
      if(*a<*b)
           c=*b;
      else
           c=*a;
       return c;
}
int main()
{
     int a,b,c;
     printf("Enter the numbers:");
     scanf("%d%d",&a,&b);
     printf("a=%d      b=%d",a,b);
     c=big(&a,&b);
     printf("The biggest number is %d",c);
     return 0;
}
