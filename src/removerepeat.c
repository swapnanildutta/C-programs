#include <stdio.h>
int main()
{
     int i,size,j,k;
     printf("Enter the size:");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the arrays elements:");
     for(i=0;i<size;i++)
         scanf("%d",&arr[i]);
     for(i=0;i<size;i++)
     {
         for(j=1+i;j<size;j++)
         {
              if(arr[i]==arr[j])
              {
                   for(k=j;k<size;k++)
                         arr[k]=arr[k+1];
                   size-=1;
                   j--;
              }
         }
     }
     for(i=0;i<size;i++)
         printf("%d   ",arr[i]);
     return 0;
}
