#include <stdio.h>
int main()
{
    float a,b,ans;
    char c;
    printf("Enter the operation to be done:(+,-,*,/)");
    scanf("%c",&c);
    printf("Enter the first number");
    scanf("%f",&a);
    printf("Enter the second number");
    scanf("%f",&b);
    switch(c)
    {
         case '+' :ans=a+b;
                 break;
         case '-' :ans=a-b;
                 break;
         case '*' :ans=a*b;
                 break;
         case '/' :
                    ans=b/a;
         default: printf("Invalid answer");
    }
    printf("The answer is %f",ans);
    return 0;
}
