#include <stdio.h>
int main()
{
    int n,i,j,c=1,f;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
             printf("\t");
        f=c;
        while(f%10>0||f/10>0)
        {
            printf("\t%d\t",f%10);
            f/=10;   
        }
        printf("\n");
        c=c*11;
    }
    return 0;
}
