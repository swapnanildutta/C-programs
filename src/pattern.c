#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("\n");
    for(i=n;i>0;i--)
    {
        for(j=n;j>=i;j--)
              printf("%d\t",j);
        for(k=i-1;k>0;k--)
              printf("%d\t",i);
        printf("\n");
    }
    return 0;
}
