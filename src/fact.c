#include <stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact*=i;
    printf("The factorial of %d is %d",n,fact);
    return 0;
}
