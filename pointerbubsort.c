#include <stdio.h>
int main()
{
    int n,i,j,k,*p;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n][2];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i][0]);
        a[i][1]=&a[i][0];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j][0]>a[j+1][0]){
                k=a[j][0];
                a[j][0]=a[j+1][0];
                a[j+1][0]=k;
                p=a[j][1];
                a[j][1]=a[j+1][1];
                a[j+1][1]=p;
                }
        }
    }
    printf("Elements-> ");
    for(i=0;i<n;i++)
        printf("%d\t\t",a[i][0]);
    printf("\nPositions->");
    for(i=0;i<n;i++)
        printf("%x\t",a[i][1]);
    return 0;
}
