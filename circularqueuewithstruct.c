#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf
typedef struct queue{
	int* que;
	int front;
	int rear;
	int cap;
	} queue;
	
int isEmpty(queue* q){
	if(q->front==-1)
		return 1;
	return 0;
	}
	
int isFull(queue* q){
	if(q->rear==-1||q->front==-1)
		return 0;
	if((((q->rear)+1)%q->cap)==q->front)
		return 1;
	return 0;
	}
	
int enqueue(queue* q, int elem){
	if(isFull(q)){
		pf("ERROR: [QUEUE_OVERFLOW] Queue already full\n");
		return 0;
		}
	if(q->front==-1)
		q->front=0;
	q->rear=((q->rear+1)%q->cap);
	*(q->que+q->rear)=elem;
	return 1;
	}

int dequeue(queue* q){
	if(isEmpty(q)){
		pf("ERROR: [QUEUE_UNDERFLOW] Queue empty already, returning -999999999 as error value\n");
		return -999999999;
		}
	int te=((q->front)%q->cap);
	q->front=(q->front+1)%q->cap;
	if(((te)%q->cap)==q->rear){
		q->front=-1;
		q->rear=-1;
		}
	return *(q->que+te);
	}

void printQueue(queue* q){
	int i=q->front,j=q->rear;
	pf("==QUEUE CONTENTS==\n");
	if(isEmpty(q)){
		pf("[QUEUE]\n[EMPTY]\n");
		return;
		}
		if(i>j)
			j=j+q->cap;
//	pf("[DEBUG] Going from %d to %d [DEBUG]\n",i,j);
	for(;i<=j;i++)
		pf("%d\n",*(q->que+(i%(q->cap))));
		}

int initializeQueue(queue* q,int size){
	q->que = (int*)malloc((sizeof(int))*size);
	q->cap = size;
	q->front = -1;
	q->rear = -1;
//	pf("\n[DEBUG]rear = %d; front = %d [DEBUG]\n",q->rear,q->front);
	return 1;
	}
	
int main(void){
	pf("\033[2J\033[1;1H");
	queue q;
	int cap,in=99;
	pf("Welcome to Queue testing service.\nPlease enter the maximum size of the queue you want: ");
	sf("%d",&cap);
	pf("\033[2J\033[1;1H");
	initializeQueue(&q,cap);
	pf("Queue with size %d initialized!\n",q.cap);
	while(in){
		pf("==MAIN MENU==\n\n");
		pf("1. Enqueue\n2. Dequeue\n3. Display Queue\n4. Clear Queue\n0. Exit Tester\nEnter the number of your selection choice: ");
		sf("%d",&in);
		switch(in){
			case 1:
				pf("Enter the element to enqueue: ");
				sf("%d",&cap);	
				pf("\033[2J\033[1;1H");
				if(enqueue(&q,cap))
					pf("Enqueued %d\n",cap);
				else
					pf("Failed to Enqueue!\n");
				break;
			case 2:
				pf("\033[2J\033[1;1H");
				cap=dequeue(&q);
				pf("Dequeued %d\n",cap);
				break;
			case 3:
				pf("\033[2J\033[1;1H");
				printQueue(&q);
				break;
			case 4:
				pf("\033[2J\033[1;1H");
				pf("Are you sure you want to clear the entire queue?\n1. Yes\n2. No\nEnter Choice: ");
				sf("%d",&in);
				if(in==1){
					q.front=-1;
					q.rear=-1;
					pf("\033[2J\033[1;1H");
					pf("Queue completely cleared!\n");
					}
				else{
					pf("\033[2J\033[1;1H");
					pf("Clearing operation cancelled!\n");
					in=2;
					}
				break;
			case 0:
				break;
			default:
				pf("\033[2J\033[1;1H");
				pf("Invalid choice! Please try again!\n");
			}
		}
	pf("\033[2J\033[1;1H");
	pf("Execution Halted, returning EXIT_SUCCESS\n");
	return EXIT_SUCCESS;
	}
