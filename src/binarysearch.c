#include<stdio.h>
int main()
{
    int n,i,f=0,m,s,j,k;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n],l=n-1;
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number to be searched: ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]){
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    while(f<l)
    {
         m=(f+l)/2;
         if(s==a[m])
         {
             printf("\nFound");
             break;
         }
         if(s<a[m])
             l=m-1;
         if(s>a[m])
             f=m+1;
    }
    if(f>=l)
        printf("\nNot Found ");
    return 0;
}
