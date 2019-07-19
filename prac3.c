#include <stdio.h>
int main()
{
    float a,p,r,l,b;
    int c;
    printf("Enter 1 for area of circle and 2 for area of rectangle\n");
    scanf("%d",&c);
    switch(c)
   {
       case 1:
               printf("Enter radius of circle\n");
               scanf("%f",&r);
               p=2*3.14*r;
               a=3.14*r*r;
               break;
       case 2:
               printf("Enter length of rectangle\n");
               scanf("%f",&l);
               printf("Enter breath of rectangle\n");
               scanf("%f",&b);
               p=2*(l+b);
               a=l*b;
               break;
      default:
               printf("Wrong input");
   }

               printf("Area= %f , Perimeter= %f", a,p);
        return 0;
}
