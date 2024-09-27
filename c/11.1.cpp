#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to hold student information
struct Student {
    int id;
    int clas;
    int roll_no;
    char name[50];
    float marks1;
    float marks2;
};

// Comparison functions for sorting
int compareById(const void *a, const void *b) {
    return ((struct Student *)a)->id - ((struct Student *)b)->id;
}

int compareByClas(const void *a, const void *b) {
    return ((struct Student *)a)->class - ((struct Student *)b)->class;
}

int compareByRollNo(const void *a, const void *b) {
    return ((struct Student *)a)->roll_no - ((struct Student *)b)->roll_no;
}

int compareByName(const void *a, const void *b) {
    return strcmp(((struct Student *)a)->name, ((struct Student *)b)->name);
}

int compareByMarks1(const void *a, const void *b) {
    return ((struct Student *)a)->marks1 - ((struct Student *)b)->marks1;
}

int compareByMarks2(const void *a, const void *b) {
    return ((struct Student *)a)->marks2 - ((struct Student *)b)->marks2;
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory for array of student records
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Class: ");
        scanf("%d", &students[i].class);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks 1: ");
        scanf("%f", &students[i].marks1);
        printf("Marks 2: ");
        scanf("%f", &students[i].marks2);
    }

    // Sorting based on user input
    int choice;
    printf("\nEnter your sorting criteria:\n");
    printf("1. Sort by ID\n");
    printf("2. Sort by Class\n");
    printf("3. Sort by Roll No\n");
    printf("4. Sort by Name\n");
    printf("5. Sort by Marks 1\n");
    printf("6. Sort by Marks 2\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            qsort(students, n, sizeof(struct Student), compareById);
            break;
        case 2:
            qsort(students, n, sizeof(struct Student), compareByClass);
            break;
        case 3:
            qsort(students, n, sizeof(struct Student), compareByRollNo);
            break;
        case 4:
            qsort(students, n, sizeof(struct Student), compareByName);
            break;
        case 5:
            qsort(students, n, sizeof(struct Student), compareByMarks1);
            break;
        case 6:
            qsort(students, n, sizeof(struct Student), compareByMarks2);
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    // Display sorted student details
    printf("\nSorted Student Records:\n");
    printf("ID\tClass\tRoll No\tName\tMarks 1\tMarks 2\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%s\t%.2f\t%.2f\n", students[i].id, students[i].class, students[i].roll_no, students[i].name, students[i].marks1, students[i].marks2);
    }

    // Free allocated memory
    free(students);

    return 0;
}


















