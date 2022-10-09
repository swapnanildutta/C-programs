#include <stdio.h>
int count(int *a,int len)
{
      int i,count=0;
      for(i=0;i<len;i++)
      {
             if(*(a+i)%2==0)
                   count++;
      }
      return count;
}
int main()
{
      int a[10],i,n,e,o;
      printf("Enter the number of elements of the array:");
      scanf("%d",&n);
      printf("Enter the elements of the arrayL:");
      for(i=0;i<n;i++)
      {
            scanf("%d",&a[i]);
      }
      e=count(a,n);
      o=n-e;
      printf("Number of even numbers are %d and Odd numbers are %d",e,o);
      return 0;
}
