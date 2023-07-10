#include <stdio.h>

#define MAX_STUDENTS 5

// Structure to store student information
struct student {
    int rollNo;
    char name[50];
    int age;
};

// Function to display students with age >= 20
void displayStudents(struct student students[], int size) {
    printf("Students with age >= 20:\n");
    printf("Roll No\tName\tAge\n");
    for (int i = 0; i < size; i++) {
        if (students[i].age >= 20) {
            printf("%d\t%s\t%d\n", students[i].rollNo, students[i].name, students[i].age);
        }
    }
}

int main() {
    struct student students[MAX_STUDENTS];

    // Input student data
    printf("Enter student details:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    // Display students with age >= 20
    displayStudents(students, MAX_STUDENTS);

    return 0;
}

// Output -
// Enter student details:
// Student 1:
// Roll No: 1
// Name: ram
// Age: 19
// Student 2:
// Roll No: 2
// Name: ram2 
// Age: 20
// Student 3:
// Roll No: 3
// Name: ram3
// Age: 21
// Student 4:
// Roll No: 4
// Name: ram4
// Age: 22
// Student 5:
// Roll No: 5
// Name: ram5
// Age: 23
// Students with age >= 20:
// Roll No	Name	Age
// 2	ram2	20
// 3	ram3	21
// 4	ram4	22
// 5	ram5	23