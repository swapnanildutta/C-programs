#include <stdio.h>
int hcf(int a, int b)
{
  int r=a%b;
    while(r!=0)
    {
    a=b;
    b=r;
    r=a%b;
    }
    return b;
}
int main()
{
     int a,b,c,h;
     printf("Enter the 3 numbers: ");
     scanf("%d%d%d",&a,&b,&c);
     h=hcf(a,hcf(b,c));
     printf("The hcf of %d , %d, %d is %d",a,b,c,h);
     return 0;
}
