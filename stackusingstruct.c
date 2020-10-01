#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf
typedef struct stack{
	int* stk;
	int cap;
	int top;
} stack;
int isEmpty(stack* inp){
	if(inp->top<0)
		return 1;
	return 0;
}
int isFull(stack* inp){
	if(inp->top==(inp->cap-1))
		return 1;
	return 0;
}
int push(stack* inp, int elem){
	if(isFull(inp)){
			pf("ERROR: [STK_OVERFLOW] Stack is already full. Cancelling Push operation\n");
			return 0;
	}
	inp->top++;
	*((inp->stk)+inp->top)=elem;
	return 1;
}
int pop(stack* inp){
	if(isEmpty(inp)){
		pf("ERROR: [STK_UNDERFLOW] Stack is empty. Retuning -9999999 as error value!\n");
		return -9999999;
		}
	return *((inp->stk)+inp->top--);
	}
	
int peep(stack* inp){
	if(isEmpty(inp)){
		pf("ERROR: [STK_UNDERFLOW] Stack is empty. Retuning -9999999 as error value!\n");
		return -9999999;
		}
	return *((inp->stk)+inp->top);
	}
	
	
void printStack(stack* inp){
	int i=0;
	pf("==Stack Contents==\n");
	if(isEmpty(inp)){
		pf("[STACK]\n[EMPTY]\n");
		return;
		}
	for(i=0;i<=inp->top;i++)
		pf("%d\n",*((inp->stk)+i));
	return;
	}
		
	
	
int main(void){
	stack a;
	pf("\033[2J\033[1;1H");
	pf("Enter the stack capacity: ");
	sf("%d",&a.cap);
	a.top=-1;
	a.stk=(char*)malloc(sizeof(char)*a.cap);
	int inp = 1,in;
	pf("\033[2J\033[1;1H");
	pf("STACK MAX CAPACITY: %d\n",a.cap);
	while(inp){
		pf("==MAIN MENU==\n\n1. Push\n2. Pop\n3. Peep\n4. View Stack\n0. Exit\nEnter the option number: ");
		sf("%d",&inp);				
		switch(inp){
			case 1:
				pf("Enter the integer to push: ");
				sf("%d",&in);
				pf("\033[2J\033[1;1H");
				if(push(&a,in))
					pf("Pushed element: %d\n",in);
				else
					pf("Failed to push element, Stack already full!\n");		
				break;
			case 2:
				pf("\033[2J\033[1;1H");
				pf("Popped element: %d\n",pop(&a));
				break;
			case 3:
				pf("\033[2J\033[1;1H");
				pf("Peeped element: %d\n",peep(&a));
				break;
			case 4:
				pf("\033[2J\033[1;1H");
				printStack(&a);
				break;
			case 0:
				break;
			default:
				pf("\033[2J\033[1;1H");
				pf("Invalid choice! Try again!\n");
			}
		}
	pf("\033[2J\033[1;1H");
	pf("Program execution stopped!\nReturning EXIT_SUCCESS\n");
	return EXIT_SUCCESS;
	}
