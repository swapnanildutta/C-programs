#include <stdio.h>
int sod(int n)
{
    if(n==0)
       return 0;
    return (n%10+sod(n/10));
}
