#include <stdio.h>
void freq(int *a,int n)
{
     int i,j,f;
     for(i=0;i<n;i++)
     {
         f=1;
         if(a[i]==-1)
              continue;
         else
         {
           for(j=i+1;j<n;j++)
           {
              if(a[i]==a[j])
              {
                   f++;
                   a[j]=-1;
              }
           }
         }
         printf("The frecuency of %d is %d\n",a[i],f);
     }
}
int main()
{
    int a[20],n,i;
    printf("Enter the number of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    freq(a,n);
    return 0;
}
