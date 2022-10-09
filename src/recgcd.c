#include <stdio.h>
int gcd(int a, int b)
{
    int r=0;
    if(a%b==0)
       return b;
    else
       return gcd(b,a%b);
}
int main()
{
    int a,b,g;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    g=gcd(a,b);
    printf("The gcd of %d and %d is %d",a,b,g);
    return 0;
}
