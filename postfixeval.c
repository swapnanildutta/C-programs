#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define pf printf
#define sf scanf

typedef struct stkstr{
	int* stk;
	int top;
	int cap;
	} stack;
	
int isEmpty(stack inp){
	if(inp.top<0)
		return 1;
	return 0;
	}
	
int isFull(stack inp){
	if(inp.top>=(inp.cap-1))
		return 1;
	return 0;
	}

void push(stack* inp,int a){
	if(isFull(*inp)){
		pf("ERROR: [STK_OVERFLOW] There is no more space left in stack.\n");
		return;
		}
	inp->top=inp->top+1;
	*(inp->stk+inp->top)=a;
	return;
	}

int pop(stack* inp){
	if(isEmpty(*inp)){
		pf("ERROR: [STK_UNDERFLOW] Stack is empty. Retuning -9999999 as error value!\n");
		return -9999999;
		}
	return *((inp->stk)+inp->top--);
	}
	
int peep(stack* inp){
	if(isEmpty(*inp)){
		pf("ERROR: [STK_UNDERFLOW] Stack is empty. Retuning -9999999 as error value!\n");
		return -9999999;
		}
	return *((inp->stk)+inp->top);
	}
	
	
void printStack(stack* inp){
	int i=0;
	pf("==Stack Contents==\n");
	if(isEmpty(*inp)){
		pf("[STACK]\n[EMPTY]\n");
		return;
		}
	for(i=0;i<=inp->top;i++)
		pf("%d\n",*((inp->stk)+i));
	return;
	}
		
	
int main(void){
	pf("\033[2J\033[1;1H");
	stack a;
	char* expn;
	a.top=-1;
	a.stk=(int*)malloc(sizeof(int)*100);
	a.cap=100;
	expn = (char*)malloc(sizeof(char)*100);
	pf("Enter the expression: ");
	fflush(stdin);
	fgets(expn,100,stdin);
	int i=0;
	int tem;
	char* chars=strtok(expn," ");
	while(chars!=NULL){
			if(isdigit(chars[0])){
				push(&a,atoi(chars));
				}
			if(chars[0]=='+'){
				int ina=pop(&a);
				int inb=pop(&a);
				push(&a,(ina+inb));
			}
			if(chars[0]=='-'){
				int ina=pop(&a);
				int inb=pop(&a);
				push(&a,(inb-ina));
			}
			if(chars[0]=='*'){
				int ina=pop(&a);
				int inb=pop(&a);
				push(&a,(ina*inb));
			}
			if(chars[0]=='/'){
				int ina=pop(&a);
				int inb=pop(&a);
				push(&a,(inb/ina));
			}
			if(chars[0]=='^'){
				int ina=pop(&a);
				int inb=pop(&a);
				int pow = 1;
				for(int i=0;i<ina;i++)
					pow=pow*inb;
				push(&a,pow);
			}
			chars=strtok(NULL," ");
			
			}
	pf("Result of Evaluation: %d\n",pop(&a));
	return 0;
	}
