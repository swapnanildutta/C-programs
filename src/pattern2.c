#include <stdio.h>
int main()
{
     int i,j,s;
     printf("Enter the size:");
     scanf("%d",&s);
     for(i=1;i<=s;i++)
     {
         for(j=s;j>i;j--)
             printf("   ");
         for(j=1;i<=i;j++)
             printf("%d   ",j);
         printf("\n");
     }
     return 0;
}
