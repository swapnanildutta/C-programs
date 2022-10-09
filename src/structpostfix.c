#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack{
     int top;
     int size;
     int *array;
};
struct stack a;
void push(int item)
{
     if(a.top!=a.size-1)
           a.array[++a.top]=item;
     else
           return;
}
int pop()
{
     int item;
     if(a.top!=-1)
           item=a.array[a.top--];
     return item;
}
int main()
{
     system("clear");
     char s[100];
     printf("Enter the postfix expression:  ");
     scanf("%s",s);
     a.size=strlen(s);
     a.array=(int *)calloc(a.size,sizeof(int));
     int i,j,k;
     a.top=-1;
     for(i=0;i<a.size;i++)
     {
           if((s[i]!='+')&&(s[i]!='-')&&(s[i]!='*')&&(s[i]!='/')&&(s[i]!='%'))
           {
                 char t[10];
                 t[0]=s[i];
                 int u=atoi(t);
                 printf("Pushing  %d\n",u);
                 push(u);
           }
           else
           {
                 printf("Encounters  %c: \n",s[i]);
                 int c1=pop();
                 printf("Popped : %d \n",c1);
                 int c2=pop();
                 printf("Popped : %d \n",c2);
                 int res=0;
                 
                 if(s[i]=='+')
                      res=c2+c1;
                 else if(s[i]=='-')
                      res=c2-c1;
                 else if(s[i]=='*')
                      res=c2*c1;
                 else if(s[i]=='/')
                      res=c2/c1;
                 else
                      res=c1%c2;
                 
                 printf("\n%d %c %d = %d \n",c2,s[i],c1,res);
                 push(res);
                 printf("Pushed %d : \n",res);
           }
     }
     printf("\nThe final result is- %d :\n",pop());
     return 0;
}
