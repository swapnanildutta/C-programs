#include <stdio.h>
int main()
{
    int a[10][10],m,n,i,j;
    int *p=&a;
    printf("Enter the size of matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",*(a+i)+j);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",*(*(a+i)+j));
        printf("\n");
    }
    return 0;
}
