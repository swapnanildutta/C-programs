#include <stdio.h>
void check(int d,int m)
{
     if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
     {
            if(d<=31)
               printf("Valid");
            else
               printf("Invalid");
     }
     if(m==4||m==6||m==9||m==11)
     {
            if(d<=30)
               printf("Valid");
            else
               printf("Invalid");
     }
     if(m==2)
     {
            if(d<28)
               printf("Valid");
            else
               printf("Invalid");
     }
     else
         printf("Invalid");
}
int main()
{
     int y,m,d;
     printf("Enter the date:");
     scanf("%d",&d);
     scanf("%d",&m);
     scanf("%d",&y);
     if(((y%4==0&&y%100!=0)||(y%400==0))&&m<=12)
     {
          if(m==2&&d==29)
              printf("Valid");
          else if(m<=12)
              check(d,m);
          else
              printf("Invalid");
     }
     else
         check(d,m);
     return 0;
}
