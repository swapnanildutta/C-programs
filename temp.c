#include<stdio.h>
int main()
{
   float t,r;
   int a;
   printf("enter 1 for celcius to farenheit , 2 for farenheit to celcius");
   scanf("%d",&a);
   printf("Enter the temperature");
   scanf("%f",&t);
   switch(a)
   {
      case 1:r=((t/5)*9)-32;
             break;
      case 2:r=((t-32)/9)*5;
             break;
      default:printf("Invalid input");
   }
   printf("The output is %f",r);
   return 0;
}
