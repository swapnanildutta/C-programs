#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=n-1-i;k>0;k--)
            printf(" ");
        for(j=0;j<=i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
