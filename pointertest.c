#include <stdio.h>
void print(int *p,int s)
{
     int i;
     for(i=0;i<s;i++)
     {
          printf("%d\t%u\n",*(p+i),(p+i));
     }
}
int main()
{
     int arr[5]={5,10,15,20,25};
     print(arr,5);
     return 0;
}
