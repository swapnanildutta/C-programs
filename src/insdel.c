#include<stdio.h>
int main()
{
    int n,i,s,pos;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number to be inserted: ");
    scanf("%d",&s);
    printf("Enter the position of insertion: ");
    scanf("%d",&pos);
    for(i=n;i>pos;i--)
        a[i]=a[i-1];
    a[pos]=s;
    for(i=0;i<n+1;i++)
        printf("   %d   ",a[i]);
    printf("\nEnter the position of deletion: \n");
    scanf("%d",&pos);
    for(i=pos;i<=n;i++)
        a[i]=a[i+1];
    for(i=0;i<n;i++)
        printf("  %d   ",a[i]);
    return 0;
}
