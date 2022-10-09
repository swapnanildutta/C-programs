#include <stdio.h>
#include <stdlib.h>
void display(int **arr,int m,int n)
{
	int i,j;
	printf("The array is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		    printf("%d  ",arr[i][j]);
		printf("\n");
	}
}
int isSparse(int **arr,int m,int n)
{
	int nz=0,z=0,i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		    if(arr[i][j]==0)
		        z=z+1;
		    else
		        nz=nz+1;
	   }
	}
	if(z>nz)
	    return 1;
	else
	    return 0;
}
void tuple(int **arr,int m,int n)
{
	int nz=0,i,j,k=0,**tup;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		    if(arr[i][j]!=0)
		        nz=nz+1;
	   }
	}
	tup=(int **)calloc(nz+1,sizeof(int *));
	for(i=0;i<nz+1;i++)
	    tup[i]=(int *)calloc(3,sizeof(int));
	tup[k][0]=m;
	tup[k][1]=n;
	tup[k][2]=nz;
	k=k+1;
	/*for(j=0;j<3;j++)
		    printf("%d\t",tup[0][j]);
		printf("\n");*/
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		    if(arr[i][j]!=0)
		    {
		    	tup[k][0]=i;
		    	tup[k][1]=j;
		    	tup[k][2]=arr[i][j];
		    	k=k+1;
			}
	   }
	}
	printf("Row\tColumn\tValue\n");
	for(i=0;i<nz+1;i++)
	{
		for(j=0;j<3;j++)
		    printf("%d\t",tup[i][j]);
		printf("\n");
	}
}
int main()
{
	int **arr,*t,m,n,i,j,c=0;
	printf("Enter the size of row and column: ");
	scanf("%d %d",&m,&n);
	arr=(int **)calloc(m,sizeof(int *));
	for(i=0;i<m;i++)
	    arr[i]=(int *)calloc(n,sizeof(int));
	printf("Enter the elements of the array: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		    scanf("%d",&arr[i][j]);
	}
	display(arr,m,n);
	if(isSparse(arr,m,n))
	    printf("It is a sparse matrix\n");
	else
	    printf("It is not a sparse matrix");
	tuple(arr,m,n);
	return 0;
}
