#include <stdio.h>
#include <string.h>
void addStudents(int roll[], char name[][50], float marks[], int n);
void displayStudents(int roll[], char name[][50], float marks[], int n);
void searchStudent(int roll[], char name[][50], float marks[], int n);
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int roll[n];
    float marks[n];
    char name[n][50];
    addStudents(roll, name, marks, n);
    displayStudents(roll, name, marks, n);
    searchStudent(roll, name, marks, n);
    return 0;
}
void addStudents(int roll[], char name[][50], float marks[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
}
void displayStudents(int roll[], char name[][50], float marks[], int n) {
    int i;
    printf("\nStudent Records\n");
    for(i = 0; i < n; i++) {
        printf("\nRoll Number : %d", roll[i]);
        printf("\nName        : %s", name[i]);
        printf("\nMarks       : %.2f\n", marks[i]);
    }
}
void searchStudent(int roll[], char name[][50], float marks[], int n) {
    int searchRoll, i, found = 0;
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &searchRoll);
    for(i = 0; i < n; i++) {
        if(roll[i] == searchRoll) {
            printf("\nStudent Found");
            printf("\nRoll Number : %d", roll[i]);
            printf("\nname : %s", name[i]);
            printf("\nMarks : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("\nStudent not found");
    }
}