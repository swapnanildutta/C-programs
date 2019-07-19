#include <stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return (n*fact(n-1));
}
int main()
{
    int n,f;
    printf("Enter the number to find the factorial:");
    scanf("%d",&n);
    f=fact(n);
    printf("The factorial is %d",f);
    return 0;
}
