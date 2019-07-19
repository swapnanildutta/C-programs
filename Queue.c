#include <stdio.h>
void insert(int *front,int *rear,int *s,int size,int data)
{
	if(*rear==size-1)
	     printf("Overflow");
	else
	     s+(*rear)=data;
}
void delete(int *front,int *rear,int *s,int size)
{
	
}
