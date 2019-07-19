#include <stdio.h>
int main()
{
   int a,b,c,s,p;
   printf("Enter 3 numbers:");
   scanf("%d%d%d",&a,&b,&c);
   s=a+b+c;
   p=a*b*c;
   printf("The sum is %d and product is %d",s,p);
   return 0;
}
