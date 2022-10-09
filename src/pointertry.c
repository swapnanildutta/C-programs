#include <stdio.h>
int main()
{
    int x=10;
    int *ptr;
    ptr=&x;
    int *d=ptr;
    printf("%d\n",x);
    printf("%u\n",ptr);
    printf("%u\n",d);
    printf("%d",*d);
    printf("%x",ptr);
    return 0;
}
