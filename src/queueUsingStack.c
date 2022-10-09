#include <stdio.h>
#include <stdlib.h>
int *stack1;
int *stack2;
int top1=-1;
int top2=-1;
int n;
void push(int num)
{
    if(top1==n-1)
        printf("Overflow\n");
    else
        stack1[++top1]=num;
}
void toQueue()
{
    if(top1==-1)
        printf("Underflow\n");
    else{
        for(;top1>-1;top1--)
            stack2[++top2]=stack1[top1];
    }
}
void pop()
{
    if(top1==-1)
        printf("Underflow\n");
    else{
        toQueue();
        printf("The deleted element is %d\n",stack2[top2--]);
    }
    for(;top2>-1;top2--)
            stack1[++top1]=stack2[top2];
}
void display()
{
    int i;
    toQueue();
    printf("The Queue is :");
    for(i=top2;i>=0;i--)
         printf("%d  ",stack2[i]);
    for(;top2>-1;top2--)
            stack1[++top1]=stack2[top2];
}
int main()
{
    int c,num;
    printf("Enter the size of the queue: ");
    scanf("%d",&n);
    stack1=(int *)calloc(n,sizeof(int));
    stack2=(int *)calloc(n,sizeof(int));
    do{
        printf("\nMenu\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:printf("Enter the number : ");
                   scanf("%d",&num);
                   push(num);
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:printf("Thank you");
                   break;
            default:printf("INVALID CHOICE!!");
        }
    }while(c!=4);
    return 0;
}
