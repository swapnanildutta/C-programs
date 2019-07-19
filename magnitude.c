#include<stdio.h>
int main()
{
    int n,i,sp=0,sn=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
      if(a[i]>0)
         sp+=a[i];
      else
         sn+=a[i];
    }
    printf("Positive Sum: %d",sp);
    printf("\nNegative Sum: %d",sn);
    printf("\nDifference: %d", (sp-sn));
    return 0;
}
