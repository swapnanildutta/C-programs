#include <stdio.h>
void search(int arr[],int data,int size)
{
    int i=0;
    for(i=0;i<size;i++)
        if(data==arr[i])
            break;
    if(i==size)
         printf("Not found");
    else
         printf("Found %d",i);
}
int main()
{
    int i,size,arr[size],s;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the elements of array:");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Enter the number to searched:");
    scanf("%d",&s);
    search(arr,s,size);
    return 0;
}
