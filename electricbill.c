#include <stdio.h>
int main()
{
    int u;
    float bill;
    printf("Enter the consumed energy: ");
    scanf("%d",&u);
    if(u>0&&u<=200)
        bill=0.50*u;
    if(u>200&&u<=400)
        bill=0.50*200 + (u-200)*0.65;
    if(u>400&&u<=600)
        bill=0.50*200 + 200*0.65 + (u-400)*0.80;
    if(u>600)
        bill=0.50*u + 200*0.65 + 200*0.80+ (u-600)*1.25;
    printf("The bill amount: %f",bill);
    return 0;
}
