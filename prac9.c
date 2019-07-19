#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n-i;k>0;k--)
            printf("     ");
        for(j=i;j<=2*i-1;j++)
            printf("  %d  ",j);
        for(j=j-2;j>=i;j--)
            printf("  %d  ",j);
        printf("\n");
    }
    return 0;
}
