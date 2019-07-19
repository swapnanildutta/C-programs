#include <stdio.h>
#include <string.h>
char *revstring(char *s,char *r,int i,int l)
{
    if(l<0)
       return r[i]='\0';
    else
       return revstring(s,strcat(s[l],r[i]),i+1,l-1);
}
int main()
{
    char s[15];
    char r[15];
    printf("Enter the string:");
    scanf("%s",&s);
    printf("The string is %s",s);
    *r=revstring(s,r,0,strlen(s)-1);
    printf("The string is %s",r);
    return 0;
}

