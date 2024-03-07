////////////////////////////////////////////////////////////////////////////////
//Q8. Write a program to read the name of a student (studentName), roll 
//Number (rollNo) and marks (totalMarks) obtained. rollNo may be an 
//alphanumeric string. Display the data as read. Hint: Create a Student 
//structure and write appropriate functions. 
///////////////////////////////////////////////////////////////////////////////



#include <stdio.h>

struct Student {
    char studentName[50];
    char rollNo[20];
    int totalMarks;
};

void readStudentData(struct Student *student) {
    printf("Enter student name: ");
    scanf("%s", student->studentName);

    printf("Enter roll number: ");
    scanf("%s", student->rollNo);

    printf("Enter total marks obtained: ");
    scanf("%d", &student->totalMarks);
}

void displayStudentData(const struct Student *student) {
    printf("\nStudent Name: %s\n", student->studentName);
    printf("Roll Number: %s\n", student->rollNo);
    printf("Total Marks Obtained: %d\n", student->totalMarks);
}

int main() {
    struct Student student;

    readStudentData(&student);

    printf("\nStudent Data:\n");
    displayStudentData(&student);

    return 0;
}

