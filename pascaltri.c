#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter Number of Rows n : ");
    scanf("%d",&n);
    int f=0;
    for(int i=1;i<=n;i++)
    {
        int l=0;
        for(int j=1;j<=(n-i);j++)
        {
            printf("\t");
        }
        for(int k=0;k<i;k++)
        {
            int c = fact(f)/(fact((f-l))*fact(l));
            printf("\t%d\t", c);
            l++;
        }
        f++;
        printf("\n");
    }
    return 0;
}
int fact(int x)
{
    int f = 1;
    if(x==0) return 1;
    else
    {
        for(int i=2;i<=x;i++)
            f = f * i;
        return f;
    }
}
