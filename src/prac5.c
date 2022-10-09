#include <stdio.h>
int main()
{
    float cr, pr, b;
    printf("Enter the current reading and previous:");
    scanf("%f%f",&cr,&pr);
    b=(cr-pr)*3.75;
    printf("The bill ammount: %f",b);
    return 0;
}
