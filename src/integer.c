#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number\n");
   scanf("%d", &n);
   int a;
   switch(n)
   {
       case 0:printf("Zero");
              break;
       default:
              while(n!=0)
             {
              a=n;
              n=n/2;
             }
       switch(a)
       {
           case 1:printf("Positive");
                  break;
           case -1:printf("Negative");
                  break;
        }
    }
    return 0;
}
