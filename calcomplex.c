#include <stdio.h>
typedef struct
{
      int real;
      int imag;
}complex;
void cal(complex num1, complex num2)
{
      int r=num1.real+num2.real;
      int i=num1.imag+num2.imag;
      printf("The sum:  %d+(%di)",r,i);
}
int main()
{
      complex n1,n2;
      printf("Enter the first number");
      scanf("%d+(%di)",&n1.real,&n1.imag);
      printf("Enter the second number");
      scanf("%d+(%di)",&n2.real,&n2.imag);
      cal(n1,n2);
      return 0;
}
