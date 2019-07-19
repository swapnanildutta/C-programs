#include <stdio.h>
#include <stdlib.h>
char pop(char *s,int *top)
{
	char ch;
	if(*top==-1)
	    ch='#';
	else
	{
		ch=*(s+*top);
		--*top;
	}
	return ch;
}
char topelement(char *s,int *top)
{
	if(*top==-1)
	    return '#';
	return *(s+*top);
}
int braces(char infix[])
{
	int i,rightbraces=0,leftbraces=0;
	for(i=0;infix[i]!='\0';i++)
	{
		if(infix[i]=='(')
		      leftbraces++;
	    else if(infix[i]==')')
	          rightbraces++;
    }
    return (leftbraces-rightbraces);
	
}
int main()
{
	char infix[100],postfix[100];
	int i,checkB;
	printf("Enter the expession:\n");
	scanf("%s",infix);
	checkB=braces(infix);
	if(checkB){
		printf("Wrong Brackets");
		exit(1);
	}
	for(i=0;infix[i]!='\0';i++)
	{
		char c=infix[i];
		switch(c)
		{
			case '(':
			case '+':
			case '-':
		}
	}
	return 0;
}
