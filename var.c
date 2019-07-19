#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float mean,sum,var,sd;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n],l=n-1;
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum+=a[i];
    mean=(float)sum/n;
    for(i=0;i<n;i++)
        var+=pow((a[i]-mean),2);
     var=var/n;
    sd=sqrt(var);
    printf("Mean: %f",mean);
    printf("\nVariance: %f",var);
    printf("\nStandard Deviation: %f",sd);
    return 0;
}
