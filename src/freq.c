#include <stdio.h>
int main()
{
    int n,i,copy,c;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        c=0;
        copy=n;
        while(copy!=0)
        {
            if(copy%10==i)
               c++;
            copy=copy/10;
        }
        if(c>0)
            printf("The frequency of %d in %d is %d \n",i,n,c);
    }
    return 0;
}
