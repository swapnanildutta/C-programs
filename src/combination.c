#include <stdio.h>
void print(int *num, int n, int sum)

{

    int i,s=0;

    for ( i = 0 ; i < n ; i++)
    
        s+=num[i];
    
    if(s==sum)
    {
        for ( i = 0 ; i < n ; i++)
    
           printf("%d ", num[i]);
        
    
    printf("\n");
    }

}

int main()

{

    int num[10];

    int *ptr;

    int temp;

    int i, n, j, sum;
    
    printf("\nEnter the Total stairs : ");
    
    scanf("%d",&sum);

    printf("\nHow many number you want to enter: ");

        scanf("%d", &n);

    printf("\nEnter a list of numbers to see all combinations:\n");

    for (i = 0 ; i < n; i++)

        scanf("%d", &num[i]);

    for (j = 1; j <= n; j++) {

        for (i = 0; i < n-1; i++) {

            temp = num[i];

            num[i] = num[i+1];

            num[i+1] = temp;

            print(num, n, sum);

	}

    }

    return 0;

}
