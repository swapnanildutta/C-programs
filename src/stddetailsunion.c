#include <stdio.h>
int main()
{
    typedef union
    {
       int rno;
       char name[100];
       int marks;
    }student;
    student s;
        printf("Enter the name:");
        scanf("%s",&s.name);
        printf("The name: %s\n",s.name);
        printf("Enter the roll:");
        scanf("%d",&s.rno);
        printf("The roll: %d\n",s.rno);
        printf("Enter the marks:");
        scanf("%d",&s.marks);
          printf("The name: %s\n",s.name);
          printf("The roll: %d\n",s.rno);
          printf("The marks: %d\n",s.marks);
    return 0;
}
