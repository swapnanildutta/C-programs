#include <stdio.h>
int hcf(int a, int b)
{
    if(a%b==0)
        return b;
    return hcf(b,a%b);
}
