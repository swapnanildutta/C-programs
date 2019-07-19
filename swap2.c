#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers a b c:");
    scanf("%d%d%d",&a,&b,&c);
    a=a*b*c;
    b=a/(b*c);
    c=a/(b*c);
    a=a/(b*c);
    printf("The value of a is %d , b is %d , c is %d", a,b,c);
    return 0;    
}
