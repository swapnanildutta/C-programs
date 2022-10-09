#include <stdio.h>
void hanoi(char from,char to,char other,int n)
{
     static int i=1;
     printf("Hanoi iter : %d\n",i++);
     if(n==1)
          printf("Move from %c to %c \n",from,to);
     else{
          hanoi(from,other,to,n-1);
          hanoi(from,to,other,1);
          hanoi(other,to,from,n-1);
     }
}
int main()
{
     int n;
     printf("Enter number of disk: ");
     scanf("%d",&n);
     printf("The required moves are:\n");
     hanoi('A','B','C',n);
     return 0;
}
