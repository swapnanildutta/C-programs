#include <stdio.h>
int main()
{
     int i,j,s,c=1;
     printf("Enter the row:");
     scanf("%d",&s);
     for(i=0;i<s;i++)
     {
        for(j=0;j<=i;j++)
        {
            printf("%d",c++%2);
        }
        printf("\n");
     }
     return 0;
}
