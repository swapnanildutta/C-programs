#include <stdio.h>
#include<stdlib.h>
struct student
{
       int roll;
       char name[30];
       float marks;
};
int main()
{
     struct student **s;
     int n,i;
     printf("Enter the number of students:\n");
     scanf("%d",&n);
     s=(struct student **)calloc(n,sizeof(struct student));
     for(i=0;i<n;i++)
     {
           s[i]=(struct student *)calloc(1,sizeof(struct student));
           printf("Enter your name:\n");
           scanf("%s",s[i]->name);
           printf("Enter your roll:\n");
           scanf("%d",&s[i]->roll);
           printf("Enter your marks:\n");
           scanf("%f",&s[i]->marks);
           //s[i]->name=malloc(sizeof(s[i]->name));
           //s[i]->roll=malloc(sizeof(s[i]->roll));
           //s[i]->marks=malloc(sizeof(s[i]->marks));
     }
     printf("The students are:\n");
     for(i=0;i<n;i++)
     {
           printf("%s\t",s[i]->name);
           printf("%d\t",s[i]->roll);
           printf("%f\n",s[i]->marks);
     }
     return 0;
}
