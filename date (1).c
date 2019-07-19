#include <stdio.h>
int main()
{
    int d;
    printf("Enter the number: ");
    scanf("%d",&d);
    switch(d)
    {
       case 28:printf("February");
               break;
       case 30:printf("April, June, September, November");
               break;
       case 31:printf("January, March, May, July, August, October, December");
               break;
       default:printf("Invalid");
    }
    return 0;
}
