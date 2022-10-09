#include <stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return (n*fact(n-1));
}
int isStrong(int n)
{
    int d,s=0,a=n;
    while(n!=0)
    {
        d=n%10;
        s+=fact(d);
        n=n/10;
    }
    if(s==a)
       return 1;
    else
       return 0;
}
int main()
{
    int n;
    printf("Enter the number to be checked:");
    scanf("%d",&n);
    if(isStrong(n))
       printf("It is a strong number");
    else
       printf("Not a strong number");
    return 0;
}
