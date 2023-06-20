#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* inputString, struct Student* students, int numStudents) {
    char temp[20];
    int count = 0;
    int index = 0;

    for (int i = 0; inputString[i] != '\0'; i++) {
        if (inputString[i] != ' ') {
            temp[index] = inputString[i];
            index++;
        } else {
            temp[index] = '\0';

            if (count == 0)
                students[numStudents].rollno = atoi(temp);
            else if (count == 1)
                strcpy(students[numStudents].name, temp);
            else if (count == 2)
                students[numStudents].marks = atof(temp);

            index = 0;
            count++;

            if (count > 2) {
                count = 0;
                numStudents++;
            }
        }
    }

    if (count == 2)
        students[numStudents].marks = atof(temp);
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    char inputString[100];
    printf("Enter the input string: ");
    getchar();  // Clearing the input buffer
    fgets(inputString, sizeof(inputString), stdin);

    // Removing the trailing newline character from inputString
    if (inputString[strlen(inputString) - 1] == '\n')
        inputString[strlen(inputString) - 1] = '\0';

    parseString(inputString, students, 0);

    printf("\nArray of Structures:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    free(students);

    return 0;
}

