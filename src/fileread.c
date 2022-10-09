#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    FILE *fp,*ft;
    fp=fopen("recrev.c","r");
    ft=fopen("b.c","w");
    if(fp==NULL)
    {
         printf("Unable to open");
         exit(1);
    }
    while(1)
    {
         ch=fgetc(fp);
         if(ch==EOF)
             break;
         fputc(ch,ft);
    }
    fclose(fp);
    fclose(ft);
    return 0;
}
