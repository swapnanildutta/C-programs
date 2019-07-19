#include <stdio.h>
int main()
{
     int *p;
     int n,i,max=0;
     printf("Enter the size of the array: ");
     scanf("%d",&n);
     p=(int *)calloc(n,sizeof(int));
     printf("Enter the array elements:");
     for(i=0;i<n;i++)
            scanf("%d",&p[i]);
     for(i=0;i<n;i++)
            if(max<p[i])
                   max=p[i];
     printf("The largest element is %d",max);
     return 0;
}
