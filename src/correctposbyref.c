#include <stdio.h>
void check(int *a,int len)
{
      int i,f=1;
      for(i=1;i<len-1;i++)
      {
            if((a[i-0]<a[i])&&(a[i]<a[i+1]))
                   continue;
            else
            {
                   f=0;
                   break;
            }
      }
      if(f==1)
            printf("The array is in correct order");
      else
            printf("The array is not in correct order");
}
int main()
{
     int i,a[20],n;
     printf("Enter the ");
     return 0;
}
