#include <stdio.h>
int main()
{
    int n,s=0;
    printf("Enter the number ");
    scanf("%d",&n);
    switch(n)
    {
        case 0:printf("Zero");
               break;
        default:
                  switch(n<0)
                  {
                      case 1:printf("Negative");
                             break;
                      case 0:printf("Postive");
                             break;
                  }
    }
    return 0;
}
