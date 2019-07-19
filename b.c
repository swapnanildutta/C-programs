#include <stdio.h>
int rev(int n)
{
    return trev(n,0);
}
int trev(int n, int s)
{
    if(n==0)
        return s;
    int rem,sum=0;
    rem=n%10;
    sum=s*10 +rem;
    return trev(n/10,sum);
}
int main()
{
    int n,r;
    printf("Enter the number:");
    scanf("%d",&n);
    r=rev(n);
    printf("The reverse is %d",r);
    return 0;
}
