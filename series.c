#include <stdio.h>
#include <math.h>
int fact(int);
int main()
{
    int n,c=1,i;
    float s=0.0,x;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%f",&x);
    for(i=1;i<=n;i+=2)
    {
        if(c%2==0)
            s-=pow(x,i)/fact(i);
        else
            s+=pow(x,i)/fact(i);
        c++;
    }
    printf("The sum of the series if %f",s);
    return 0;
}
int fact(int h)
{
   int f=1,i;
   for(i=1;i<=h;i++)
        f*=i;
   return f;
}
