#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the numbers a b c:");
    scanf("%d%d%d",&a,&b,&c);
    d=c;
    c=a;
    a=b;
    b=d;
    printf("The value of a is %d , b is %d , c is %d", a,b,c);
    return 0;    
}
