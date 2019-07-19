#include <stdio.h>
int main()
{
      typedef struct
      {
            int h;
            int m;
      }time;
      time t1,t2,t3;
      printf("Enter the first time:\n");
      scanf("%d:%d",&t1.h,&t1.m);
      printf("Enter the second time:\n");
      scanf("%d:%d",&t2.h,&t2.m);
      if(t2.h<t1.h)
      {
             int temh=t2.h;
             t2.h=t1.h;
             t1.h=temh;
             int temm=t2.m;
             t2.m=t1.m;
             t1.m=temm;
      }
      if(t2.m<t1.m)
      {
             t3.m=60-(t1.m-t2.m);
             t3.h=t2.h-(t1.h+1);
      }
      else
      {
             t3.m=t2.m-t1.m;
             t3.h=t2.h-t1.h;
      }
      printf("Difference in time : %d:%d",t3.h,t3.m);
      return 0;
}
