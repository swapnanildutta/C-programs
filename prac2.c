#include <stdio.h>
int main()
{
    int b;
    float da, hra, g;
    printf("Enter the basic salary:\n");
    scanf("%d",&b);
    da=0.74*b;
    hra=0.15*b;
    g=b+da+hra;
    printf("The gross salary is %f",g);
return 0;
}
