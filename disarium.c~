#include <stdio.h>
#include <math.h>
int main()
{
    int n,c=0,a,b,s=0,d;
    printf("Enter the number: ");
    scanf("%d",&n);
    a=n;
    b=n;
    while(a>0)
    {
        a=a/10;
        c++;
    }
    while(b>0)
    {
        d=b%10;
        s=s+pow(d,c--);
        b=b/10;
    }
    if(s==n)
       printf("Disarium number");
    else
       printf("Not Disarium number");
    return 0;
}
