#include <stdio.h>
int main()
{
     int n,a,c,i,j;
     printf("Enter the number of lines: ");
     scanf("%d",&n);
     a=n;
     c=n;
     for(i=1;i<n;i++)
     {
         for(j=1;j<=a;j++)
         {
             if(j==c||j==a)
                 printf("*");
             else
                 printf(" ");
         }
         a++;
         c--;
         printf("\n");
     }
     for(j=1;j<2*n;j++)
         printf("*");
     return 0;
}
