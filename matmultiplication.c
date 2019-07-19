#include <stdio.h>
int main()
{
    int n,m[20][20],a[20][20],r[20][20],i,j,c=1,s,k;
    printf("Enter the size of the square matrix1:");
    scanf("%d",&n);
    printf("Enter the elements of square matrix1:");
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
             scanf("%d",&m[i][j]);
    }
    printf("Enter the elements of square matrix2:");
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
             scanf("%d",&a[i][j]);
    }
    printf("The matrix1 is\n");
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
             printf("%d   ",m[i][j]);
         printf("\n");
    }
    printf("The matrix2 is\n");
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
             printf("%d   ",a[i][j]);
         printf("\n");
    }
    for(i=0;i<n;i++)
    {
         
         for(j=0;j<n;j++)
         {
             s=0;
             for(k=0;k<n;k++)
                  s+=a[i][k]*m[k][j];
             r[i][j]=s;
         }
         
    }
    printf("The multiplied matrix is\n");
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
             printf("%d   ",r[i][j]);
         printf("\n");
    }
    return 0;
}
