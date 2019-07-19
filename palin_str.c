#include<stdio.h>
#include<string.h>
int CompareStrings(char *,char *);
int StringLength(char *);
int main()
{
    int length,i,v,compare;
    char str1[50],str2[50];
    printf("Enter a string to check:\n");
    gets(str1);
    length=StringLength(str1);
    for(i=0;i<length;i++)
    {
        while(str1[i]!='\0')
        {
            str2[i]=str1[length-1-i];
            i++;
        }
        str2[i]='\0';
    }
    printf("\nThe length of the string is %d",length);
    printf("\nThe reversed string is %s",str2);
    compare=CompareStrings(str1,str2);
     if(compare==0)
    {
        printf("\nIt's a palindrome string!\n");
    }
    else
    {
        printf("\nIt's not a palindrome string!\n");
    }
    return 0;
}
int StringLength(char *str)
{
    int i=0;
    for(i=0;str[i]!='\0';i++)
    {

    }
    return i;
}
int CompareStrings(char *str1, char *str2)
{
    int i;
    while(str1[i]!='\0'||str2[i]!='\0')
    {
        i++;
        if(str1[i]==str2[i])
        {
            return 0;
        }
        else
        {
            return -1;
        }   
    }
}