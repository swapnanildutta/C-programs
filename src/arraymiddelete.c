#include <stdio.h>
#include <stdlib.h>

int getinstances(int* array, int size, int elem){
	int count=0,i=0;
	for(i=0;i<size;i++)
		if(array[i]==elem)
			count++;
	return count;
		}	
void printlocs(int* array, int size, int elem){
	int i=0;
	for(i=0;i<size;i++)
		if(array[i]==elem)
			printf("%d found at position %d\n",elem,i+1);
	return;
		}
void shift(int* array, int pos, int size){
	pos=pos;
	for(;pos<size-1;pos++)
		array[pos]=array[pos+1];
	array[pos]=0;
	return;
		}
int getpos(int* array,int size, int elem){
	int pos=-1,i=0;
	for(i=0;i<size;i++)
		if(array[i]==elem)
			pos=i;
	return pos;			
		}
int delete(int* array, int size, int noofelems, int* deletions, int noofdeletions){
	int i,j,k,l,elemtemp,elemmultidelpos;
	int deleted=0;
		for(i=0;i<noofdeletions;i++){	
			if((deletions[i]-1)<noofelems) {//EXISTS AS INDEX
				elemtemp=array[deletions[i]-1];
					if((deletions[i])>=noofelems)
						continue;
				if(getinstances(array, size, elemtemp)>1){
					printlocs(array,size,elemtemp);
					printf("Enter the position to delete the element from: ");
					scanf("%d",&elemmultidelpos);
					shift(array,(elemmultidelpos-1),size);
					deleted++;
					}
				else if(getinstances(array,size,elemtemp)==1){
					shift(array,(deletions[i]),size);
					deleted++;}
					}
					
			else if(getinstances(array,size,deletions[i])){
				elemtemp = deletions[i];
				if(getinstances(array, size, elemtemp)>1){
					printlocs(array,size,elemtemp);
					printf("Enter the position to delete the element from: ");
					scanf("%d",&elemmultidelpos);
					shift(array,(elemmultidelpos-1),size);
					deleted++;
					}
				else if(getinstances(array,size,elemtemp)==1){
					shift(array,getpos(array,size,elemtemp),size);
					deleted++;}
					}
				}
		return deleted;
			}
			
void printarray(int* array, int sizetoprint){
	int i;
	for(i=0;i<sizetoprint;i++)
		printf("%d,",array[i]);
	printf("\b.\r\n");			
}
int main(void){
	int *array, *deletions;
	int arsize,arelems,nodels,deleted,i;
	printf("Enter the size of the array: ");
	scanf("%d",&arsize);
	array = (int*) calloc(sizeof(int),arsize);
	printf("Enter the number of elements: ");
	scanf("%d",&arelems);
	if(arelems>arsize){
		printf("ERROR: Number of elements cannot be greater than the size of the array!");
		return 0;
	}
	printf("Enter the elements (%d elements):",arelems);
	for(i=0;i<arelems;i++)
		scanf("%d",&array[i]);
	printf("Enter the number of elements to delete: ");
	scanf("%d",&nodels);
	deletions = (int*) calloc(sizeof(int),nodels);
	printf("Enter the elements/indexes to delete (%d elements/indexes):",nodels);
	for(i=0;i<nodels;i++)
		scanf("%d",&deletions[i]);
	printf("Original Array: \n");
	printarray(array,arelems);
	deleted=delete(array,arsize,arelems,deletions,nodels);
	if(deleted){
		printf("Array after deletion: \n");
		printarray(array,arelems-deleted);
		}
	else
		printf("No Element/index found, so, no deletion was done!");
	printf("\n");
	return 0;
	}
	
		
		
