#include <stdio.h>
int find(char *s,char *sub)
{
     int l,ls,i,j,f=0,c=0;
     for(l=0;s[l]!='\0';l++);
     for(ls=0;sub[ls]!='\0';ls++);
     for(i=0;i<l-ls+1;i++)
     {
         for(j=i;j<ls+i;j++)
         {
            if(s[j]==sub[j-i])
                f++;
         }
         if(f==ls)
         {
             c=1;
             break;
         }
     }
     return c;
}
int main()
{
     char s[100],sub[25];
     printf("Enter the sentence:\n");
     gets(s);
     printf("Enter the substring to find:\n");
     gets(sub);
     printf("%s\n",s);
     printf("%s\n",sub);
     if(find(s,sub)==1)
         printf("The substring exists in the sentence");
     else
         printf("The substring doesn't exixt in the sentence");
     return 0;
}
