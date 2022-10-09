#include <stdio.h>
int gcd(int a, int b,int c)
{
    if(a%b==0)
    {
         if(c%b==0)
             return b;
         else
             return gcd(a,c%b,b);
    }
    else
         return gcd(b,a%b,c);
}
int main()
{
    int a,b,c,g;
    printf("Enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    g=gcd(a,b,c);
    printf("The gcd of %d ,%d and %d is %d",a,b,c,g);
    return 0;
}
