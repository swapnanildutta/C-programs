#include <stdio.h>
int main()
{
    int i,j,a[20],n,s,f=0,t=0,x=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array of numbers: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the sum of elements to be searched: ");
    scanf("%d",&s);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])==s)
            {
                printf("(%d , %d)\n",a[i],a[j]);
                f=1;
                x++;
            }
            t++;
        }
    }
    if(f==0)
        printf("No such pair found");
    printf("The probabily was %f",x/(t*1.0));
    return 0;
}
