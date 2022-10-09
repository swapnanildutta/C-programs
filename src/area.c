#include<stdio.h>
int main()
{
    int l,b,a;
    printf("Enter the dimension of the rectangle:");
    scanf("%d%d",&l,&b);
    a=l*b;
    printf("The area of rectangle of sides %d and %d is %d",l,b,a);
    return 0;
}
