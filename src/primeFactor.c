#include <stdio.h>
int main()
{
    int n,i,c;
    printf("Enter the number : ");
    scanf("%d",&n);
    c=n;
    for(i=2;i<=n/2;i++)
      while(c%i==0)
     {
        printf("%d ,",i);
        c=c/i;
     }
    return 0;
}
