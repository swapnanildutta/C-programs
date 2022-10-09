#include <stdio.h>
int fibo(int n)
{
    if(n==1||n==2)
    {
        if(n==1)
           return 0;
        else
           return 1;
    }
    else
        return (fibo(n-1)+fibo(n-2));
}
int main()
{
    int n,i;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("The Fibonacci series is-\n");
    for(i=1;i<=n;i++)
        printf("%d\t",fibo(i));
    return 0;
} 
