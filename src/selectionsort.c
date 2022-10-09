#include <stdio.h>
#include <stdlib.h>
int n;
void display(int *arr)
{
     int i;
     for(i=0;i<n;i++)
         printf("%d  ",arr[i]);
     printf("\n");
}
void selectionsort(int *arr)
{
     int i,min,j,temp;
     for(i=0;i<n-1;i++)
     {
         min=i;
         for(j=i+1;j<n;j++)
         {
             if(arr[min]>arr[j])
                 min=j;
         }
         if(min!=i)
         {
             temp=arr[min];
             arr[min]=arr[i];
             arr[i]=temp;
         }
         printf("Pass %d ---> ",i+1);
         display(arr);
     }
}
int main()
{
    int i,j,*arr;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
         scanf("%d",&arr[i]);
    printf("\nThe array is: ");
    display(arr);
    selectionsort(arr);
    printf("\nAfter sorting ");
    display(arr);
    return 0;
}
