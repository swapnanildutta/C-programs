#include<stdio.h>
int main()
{
    int n,i,j,k=0,c=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i+1]>a[i])
            c++;
        }
        if(c==(n-1)) break;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]){
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
                }
        }
    }
}
