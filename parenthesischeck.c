#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define pf printf
#define sf scanf
#define MAX 50
int pointer=-1;
char stack[MAX];

int isEmpty(){
	if(pointer<0)
		return 1;
	return 0;
	}
	
int isFull(){
	if(pointer>=(MAX-1))
		return 1;
	return 0;
	}

void push(char a){
	if(isFull()){
		pf("ERROR: [STK_OVERFLOW] There is no more space left in stack.\n");
		return;
		}
	pointer++;
	stack[pointer]=a;
	return;
	}

char pop(){
	if(isEmpty()){
		pf("ERROR: [STK_UNDERFLOW] Stack is empty. Retuning -9999999 as error value!\n");
		return "\0";
		}
	return stack[pointer--];
	}
	
char peep(){
	if(isEmpty()){
		pf("ERROR: [STK_UNDERFLOW] Stack is empty. Retuning -9999999 as error value!\n");
		return "\0";
		}
	return stack[pointer];
	}

	int isOpening(char c){
		if(c=="{"||c=="("||c=="[")
			return 1;
		return 0;
		}
	char getClosing(char c){
		if(c=="{")
			return "}";
		if(c=="(")
			return ")";
		if(c=="[")
			return "]";
			}
	
	
int main(void){
	char str[50];
	pf("Enter the braces: ");
	gets(str);
	int i=0,f=0;
	while(str[i]!="\0"){
		if(isOpening(str[i]))
			push(str[i]);
		else
			if(str[i]!=pop())
				f=1;
				
		i++;
		}
	if(f)
		pf("Mismatch found!");
	else
		pf("Seems okay!");
		
	return EXIT_SUCCESS;
	}
