#include <stdio.h>
int main()
{
    int n,i,p,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        p=i*(i-1);
        if(n==p)
        {    
           c=1;
           break;
        }
    }
    if(c==1)
       printf("Pronic Number");
    else
       printf("Not Pronic Number");
    return 0;
}
