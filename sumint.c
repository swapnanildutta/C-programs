#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum+=a[i];
    printf("Sum of the elements: %d",sum);
    return 0;
}
