#include<stdio.h>
int main()
{
    int n,i,j,k=0,min;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
             if(a[min]>a[j])
                min=j;
        }
        k=a[min];
        a[min]=a[i];
        a[i]=k;
    }
    for(i=0;i<n;i++)
        printf("  %d   ",a[i]);
    return 0;
}
