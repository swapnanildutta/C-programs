#include <stdio.h>
int main()
{
    int i,temp,size,a[size];
    printf("Enter the size:");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    for(i=0;i<size/2;i++)
    {
         temp=a[i];
         a[i]=a[size-1-i];
         a[size-1-i]=temp;
    }
    for(i=0;i<size;i++)
        printf("%d   ",a[i]);
    return 0;
}
