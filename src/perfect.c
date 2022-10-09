#include <stdio.h>
int main()
{
    int n,s,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
           s+=i;
    }
    if(n==s)
       printf("Perfect number");
    else
       printf("Not perfect number");
    return 0;
}
