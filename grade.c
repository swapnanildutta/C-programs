#include <stdio.h>
int main()
{
   int marks;
   printf("Enter the marks\n");
   scanf("%d",&marks);
   if(marks<=100&&marks>=90)
       printf("O");
   if(marks<90&&marks>=80)
       printf("E");
   if(marks<80&&marks>=70)
       printf("A");
   if(marks<70&&marks>=60)
       printf("B");
   if(marks<60&&marks>=50)
       printf("C");
   if(marks<50&&marks>=40)
       printf("D");
   if(marks<40&&marks>=0)
       printf("F");
   if(marks>=100&&marks<0)
       printf("Invalid");
   return 0;
}
