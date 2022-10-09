#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float d,x1,x2,r,x,y;
    printf("Enter the values of a, b, c : ");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-4*a*c;
    if(d==0)
    {
        x1=(float)((-b)/(2*a));
        printf("The two equal root of the equation are %f", x1);
    }else if(d>0)
    {
        x1=(float)((-b + sqrt(d))/(2*a));
        x2=(float)((-b - sqrt(d))/(2*a));
        printf("The two roots of the equation are %f and %f", x1,x2);
    }else
    {
        d=d*-1;
        x=sqrt(d);
        int k=2*a;
        r=(float)b/(2*a);
        y=x/k;
        printf("The two roots of the equation are");
        printf("-%f + %fi\n ",r,y);
        printf("-%f - %fi ",r,y);
    }
    return 0;
}
