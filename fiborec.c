#include <stdio.h>
void fibo(int a, int b, int n)
{
    if(n==0)
        printf("\n");
    else
    {
         printf("%d\t",a);
         fibo(b,a+b,n-1);
    }
}
int main()
{
    int n;
    printf("Enter the number of fibonacci numbers to be printed:");
    scanf("%d",&n);
    fibo(0,1,n);
    return 0;
}
