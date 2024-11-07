#include <stdio.h>
#include <string.h>

struct employee
{

   char name[25];
   int Id;
   char department[20];
   float salary;
   char email[50];
}employee;

int main ()
{
 strcpy(employee.name, "John_Doe");
 employee.Id = 12345;
 strcpy(employee.department, "Human_Resources");
 employee.salary = 55000.50;
 strcpy(employee.email, "john.doe@company.com");

//print the results

 printf("name: %s\n", employee.name);
 printf("Id: %d\n", employee.Id);
 printf("department: %s\n", employee.department);
 printf("salary: %f\n", employee.salary);
 printf("email: %s\n", employee.email);

 return 0;

}
