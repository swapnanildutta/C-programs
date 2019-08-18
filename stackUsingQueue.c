#include <stdio.h>
#include <stdlib.h>
int *queue1;
int *queue2;
int front1=-1;
int rear1=-1;
int front2=-1;
int rear2=-1;
int n;
void toStack()
{
    if(front1==-1&&rear1==-1)
        printf("Underflow\n");
    else{
        for(front2=0;front1<=rear1;front1++)
            queue2[++rear2]=queue1[front1];
        front1=-1,rear1=-1;
    }
}
void enqueue(int num)
{
    if(rear1==n-1)
        printf("Overflow\n");
    else{
        front1=0;
        toStack();
        queue1[++rear1]=num;
        for(front1=0;front2<=rear2;front2++)
            queue1[++rear1]=queue2[front2];
        front2=-1,rear2=-1;
    }
}
void dequeue()
{
    if(front1==-1&&rear1==-1)
        printf("Underflow\n");
    else{
        int i;
        printf("The deleted element is %d\n",queue1[front1]);
        for(i=0;i<rear1;i++)
            queue1[i]=queue1[i+1];
        rear1--;
        if(rear1==-1)
            front1=-1;
    }
}
void display()
{
    int i;
    if(front1==-1&&rear1==-1)
        printf("No element to display!!\n");
    else{
        printf("The Stack is :");
        for(i=front1;i<=rear1;i++)
            printf("%d  ",queue1[i]);
    }
}
int main()
{
    int c,num;
    printf("Enter the size of the queue: ");
    scanf("%d",&n);
    queue1=(int *)calloc(n,sizeof(int));
    queue2=(int *)calloc(n,sizeof(int));
    do{
        printf("\nMenu\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:printf("Enter the number");
                   scanf("%d",&num);
                   enqueue(num);
                   break;
            case 2:dequeue();
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
