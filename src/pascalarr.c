#include <stdio.h>
int main()
{
    int i,j,k,size;
    printf("Enter the size:");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
       arr[i]=0;
    arr[0]=1;
    for(i=0;i<size;i++)
    {
        for(j=size-1-i;j>0;j--)
            printf("\t");
        for(j=0;j<=i;j++)
            printf("\t%d\t",arr[j]);
        printf("\n");
        for(k=i+1;k>0;k--)
            arr[k]=arr[k]+arr[k-1];
    }
    return 0;
} 
