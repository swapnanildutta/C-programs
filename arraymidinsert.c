#include <stdio.h>
#include <stdlib.h>
int insert(int* arr,int size, int pos, int* elemstoadd, int noofadelem, int elemspresent){
	int i,j,i2;
	if((pos+noofadelem)>size){
		printf("ERROR: Size of array exceeding max after insertion!\n");
		return 0;
		}
	if(arr[pos]==0){
		for(j=0;j<noofadelem;j++)
			arr[pos+j]=elemstoadd[j];
		return 1;
	}
	else{
		for(i=size-1;i>=pos;i--){
			arr[i]=arr[i-noofadelem];
			printf("SHIFTING OP: %d shifted from position #%d to positions #%d\nARRAY: [",arr[i],i-noofadelem+1,i+1);
			for(i2=0;i2<size;i2++)
				printf("%d,",arr[i2]);
			printf("\b]\n");
			}
		printf("ARRAY STATUS BEFORE OVERWRITE: \n");
		for(i=0;i<elemspresent+noofadelem;i++)
			printf("%d,",arr[i]);
		printf("\b.\n");
		for(j=0;j<noofadelem;j++)
			arr[pos-1+j]=elemstoadd[j];
		printf("ARRAY STATUS AFTER OVERWRITE: \n");
		for(i=0;i<elemspresent+noofadelem;i++)
			printf("%d,",arr[i]);
		printf("\b.\n");
		return 1;
	}
	return 0;
	}

int main(void){
	int sz,i,pos,noelm,noofinsert;
	int* array; int* insertions;
	printf("Enter the size of array: ");
	scanf("%d",&sz);
	printf("Enter the number of elements: ");
	scanf("%d",&noelm);
	if(noelm>sz){
		printf("ERROR: Number of elements cannot be greater than the size of the array!");
		return 0;
	}
	array = (int*) calloc(sizeof(int),sz);
	printf("Enter the elements (%d elements): ",noelm);
	for(i=0;i<noelm;i++)
		scanf("%d",&array[i]);
	printf("Enter the number of elements to insert: ");
	scanf("%d",&noofinsert);
	insertions = (int*) calloc(sizeof(int),noofinsert);
	printf("Enter the elements to insert (%d elements): ",noofinsert);
	for(i=0;i<noofinsert;i++)
		scanf("%d",&insertions[i]);
	printf("Enter the position to start insertion from: ");
	scanf("%d",&pos);
	printf("Initial array: \r\n");
	for(i=0;i<noelm;i++)
		printf("%d,",array[i]);
	printf("\b.\n");
	if(insert(array,sz,pos,insertions,noofinsert,noelm)){
		printf("Inserted array: \r\n\n");
		for(i=0;i<noelm+noofinsert;i++)
			printf("%d,",array[i]);
		printf("\b.\n");
	}
	else
		printf("There has been an error during execution ERRORCODE: insert_failure, please contact support");
	printf("\n");
	return 0;
	}
