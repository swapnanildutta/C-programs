#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    char ch;
    int n,i,pos,len;
    scanf("%s",s);
    scanf("%d",&n);
    char res[n];
    len=strlen(s);
    for(i=0;i<n;i++)
    {
        scanf("%c",&ch);
        scanf("%d",&pos);
        switch(ch)
        {
             case 'L':strcat(res,s[pos]);
                      break;
             case 'R':strcat(res,s[len-pos]);
                      break;
             default:n=n-1;
        }
    }
    printf("%s",res);
    return 0;
}

