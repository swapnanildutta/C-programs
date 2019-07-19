#include <stdio.h>
void show(int a,int b=10)
{
     printf("Sum+%d",(a+b));
}
int main()
{
     show(12,20);
     show(25);
     return 0;
}
