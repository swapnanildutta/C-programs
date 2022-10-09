#include <stdio.h>
int main()
{
    //input and initialization part
    int n,sn,st[10],i;
    printf("Enter the number of stairs: ");
    scanf("%d",&n);
    printf("Enter the number of counts of step: ");
    scanf("%d",&sn);
    printf("Enter the number of steps:");
    for(i=0;i<sn;i++)
        scanf("%d",&st[i]);
    //combination part
    int sum,limit=0;
    for(i=0;i<sn;i++)
        limit+=(n/st[i]);
    for(i=0;i<=limit)
    {
       sum=0
       for()
    }
}
