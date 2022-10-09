#include "stdio.h"
#include "recfact.c"
#include "rechcf.c"
#include "recsod.c"
int main()
{
    int c,n,f,a,b,h,s,x;
    printf("Enter your choice of operation:\n 1.Factorial  2.HCF  3.Sum of digits");
    scanf("%d",&c);
    switch(c)
    {
          case 1:printf("Enter the number:");
                 scanf("%d",&n);
                 f=fact(n);
                 printf("The factorial is %u",f);
                 break;
          case 2:printf("Enter the first number:");
                 scanf("%d",&a);
                 printf("Enter the second number:");
                 scanf("%d",&b);
                 h=hcf(a,b);
                 printf("The hcf is %u",h);
                 break;
          case 3:printf("Enter the number:");
                 scanf("%d",&x);
                 s=sod(x);
                 printf("The sum of digits is %d",s);
                 break;
          default:printf("INVALID!!!");
    }
    return 0;
}
