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
void bubblesort(int *arr)
{
     int i,j,temp;
     for(i=0;i<n-1;i++)
     {
         for(j=0;j<n-i-1;j++)
         {
             if(arr[j]>arr[j+1])
             {
                  temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
             }
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
    bubblesort(arr);
    printf("\nAfter sorting ");
    display(arr);
    return 0;
}
