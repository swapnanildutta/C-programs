#include <stdio.h>
#include <string.h>
int main()
{
    char s[10][10],temp[10];
    int i,j,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the string: ");
    for(i=0;i<n;i++)
        scanf("%s",s+i);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(s+j,s+j+1)>0)
            {
                strcpy(temp,(s+j));
                strcpy((s+j),(s+j+1));
                strcpy((s+j+1),temp);
            }
        }
    }
    printf("The elements are : \n");
    for(i=0;i<n;i++)
        printf("%s  ",*(s+i));
    printf("\n");
    return 0;
}
