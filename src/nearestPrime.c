#include <stdio.h>
int isPrime(int n)
{
    int i,flag=1;
    for(i=2;i<n;i++)
        if(n%i==0)
           flag=0;
    return flag;
}
int nearestPrime(int n)
{
    int i,j;
    for(i=1;;i++)
    {
         if(isPrime(n+i)==1)
         {
             return n+i;
             break;
         }
         if(isPrime(n-i)==1)
         {
             return n-i;
             break;
         }
    }
}
int main()
{
    int n,nearest;
    printf("Enter the number:\n");
    scanf("%d",&n);
    nearest=nearestPrime(n);
    printf("The Nearest Prime number is: %d",nearest);
    return 0;
}
