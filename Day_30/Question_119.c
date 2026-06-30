#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    int empId[n];
    float salary[n];
    char name[n][50];
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);
        printf("Enter Employee Name: ");
        scanf("%s", name[i]);
        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }
    printf("\nEmployee records \n");
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", empId[i]);
        printf("Name  : %s\n", name[i]);
        printf("Salary: %.2f\n", salary[i]);
    }
    return 0;
}