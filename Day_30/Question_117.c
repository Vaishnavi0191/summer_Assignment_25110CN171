#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int roll[n];
    float marks[n];
    char name[n][50];
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", name[i]);
        printf("Enter roll no. : ");
        scanf("%d", &roll[i]);
        printf("Enter marks: ");
        scanf("%f", &marks[i]);
    }
    printf("\n Student Records\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name : %s\n", name[i]);
        printf("Roll Number : %d\n", roll[i]);
        printf("Marks : %.2f\n", marks[i]);
    }
    return 0;
}