#include <stdio.h>
int main()
{
    typedef struct
    {
       int rno;
       char name[100];
       int marks;
    }student;
    student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the name:");
        scanf("%s",&s[i].name);
        printf("Enter the roll:");
        scanf("%d",&s[i].rno);
        printf("Enter the marks:");
        scanf("%d",&s[i].marks);
    }
    printf("Students who scored above 75");
    for(i=0;i<5;i++)
    {
       if(s[i].marks>75)
       {
          printf("The name: %s\n",s[i].name);
          printf("The roll: %d\n",s[i].rno);
          printf("The marks: %d\n",s[i].marks);
       }
    }
    return 0;
}
