#include <stdio.h>
int main()
{
    typedef struct
    {
       int emno;
       char name[100];
       float salary;
    }employee;
    employee emp;
    float increase=0,amount=0;
    printf("Enter the name:");
    scanf("%s",emp.name);
    printf("Enter the employee number:");
    scanf("%d",&emp.emno);
    printf("Enter the salary:");
    scanf("%f",&emp.salary);
    printf("The employee details are");
    if(emp.salary>5000)
         increase=0;
    else if(emp.salary>2000 && emp.salary<=5000)
         increase=emp.salary*0.1;
    else
         increase=emp.salary*0.15;
    amount=emp.salary+increase;
    printf("The name: %s\n",emp.name);
    printf("The employee number: %d\n",emp.emno);
    printf("The salary: %f\n",emp.salary);
    printf("Increase in salary: %f\n",increase);
    printf("Amount after incrementation: %f\n",amount);
    return 0;
}
