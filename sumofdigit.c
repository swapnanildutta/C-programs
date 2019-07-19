#include <stdio.h>
int main()
{
    int n,a,s;
    printf("Enter the number: ");
    scanf("%d",&n);
    a=n;
    while(a%10!=0)
    {
         s+=a%10;
         a=a/10;
    }
    printf("Sum of digit are %d",s);
    return 0;
}
