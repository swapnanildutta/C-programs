#include<stdio.h>
#include<math.h>
int main()
{
     float a,b,c,s,ar;
     printf("Enter the sides of the triangle:");
     scanf("%f%f%f",&a,&b,&c);
     s=(a+b+c)/2;
     ar=sqrt((s*(s-a)*(s-b)*(s-c)));
     printf("The area is %f", ar);
     return 0;
}
