///////////////////////////////////////////////////////////////////////////////////////
//Q11. Create a structure called Employee that includes three fields - a first 
//	name (type String), a last name (type String) and a monthly salary (double). 
//	Write functions to initialize the fields, print them and modify the values in 
//	the given object. Example methods: 
//		-> void emp_init(struct emp* e);  
//		-> void set_salary(struct emp *e, double sal); 
//		-> void emp_display(struct emp *e); 
//Write the test code in the main(). Create two emp objects and display each 
//object�s yearly salary. Then give each Employee a 10% raise and display 
//each Employee�s yearly salary again. 
//
/////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

struct Employee {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

void emp_init(struct Employee *e, const char *first, const char *last, double salary) {
    strcpy(e->firstName, first);
    strcpy(e->lastName, last);
    e->monthlySalary = salary;
}

void set_salary(struct Employee *e, double sal) {
    e->monthlySalary = sal;
}

void emp_display(const struct Employee *e) {
    printf("\nEmployee Details:\n");
    printf("First Name: %s\n", e->firstName);
    printf("Last Name: %s\n", e->lastName);
    printf("Monthly Salary: %.2f\n", e->monthlySalary);
    printf("Yearly Salary: %.2f\n", e->monthlySalary * 12);
}

int main() {
    struct Employee emp1, emp2;

    emp_init(&emp1, "John", "Doe", 5000.0);
    emp_init(&emp2, "Jane", "Smith", 6000.0);

    emp_display(&emp1);
    emp_display(&emp2);

    set_salary(&emp1, emp1.monthlySalary * 1.1);
    set_salary(&emp2, emp2.monthlySalary * 1.1);

    printf("\nAfter 10%% raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    return 0;
}

