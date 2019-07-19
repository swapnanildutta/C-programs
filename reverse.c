#include <stdio.h>
int main()
{
    int n,a,r,re;
    printf("Enter the number: ");
    scanf("%d",&n);
    a=n;
    while(a%10!=0)
    {
         r=a%10;
         a=a/10;
         re=re*10+r;
    }
    printf("Reverse of number %d",re);
    return 0;
}
