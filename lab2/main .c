/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee{
    int em_id;
    char em_name[10];
    int em_age;
    char em_phone[12];
    float em_salary;
} employee_t;

void employee_info(employee_t my_employee){
    printf("em_id : %d\n", my_employee.em_id);
    printf("em_name : %s\n", my_employee.em_name);
    printf("em_age : %d\n", my_employee.em_age);
    printf("em_phone : %s\n", my_employee.em_phone);
    printf("em_salary : %f\n", my_employee.em_salary);
    
}
    

int main(){
    employee_t my_employee;
    my_employee.em_id = 0;
    strcpy(my_employee.em_name, "IU Lee");
    my_employee.em_age = 18;
    strcpy(my_employee.em_phone, "0937123456");
    my_employee.em_salary = 1000.3;
    printf("%d\n", (int)sizeof(employee_t));
    employee_info(my_employee);
}