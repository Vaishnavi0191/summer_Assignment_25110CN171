#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, netSalary;
};
int main()
{
    struct Employee emp[100];
    int n = 0;
    int choice, i, id, found;
    do
    {
        printf("\n SALARY MANAGEMENT SYSTEM \n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Records\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basic);

                printf("Enter HRA: ");
                scanf("%f", &emp[n].hra);

                printf("Enter DA: ");
                scanf("%f", &emp[n].da);

                emp[n].netSalary = emp[n].basic + emp[n].hra + emp[n].da;

                printf("Salary record added successfully!\n");
                n++;
                break;
            case 2:
                if(n == 0)
                {
                    printf("No salary records found.\n");
                }
                else
                {
                    printf("\n----- Salary Records -----\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nEmployee %d\n", i + 1);
                        printf("ID         : %d\n", emp[i].id);
                        printf("Name       : %s\n", emp[i].name);
                        printf("Basic      : %.2f\n", emp[i].basic);
                        printf("HRA        : %.2f\n", emp[i].hra);
                        printf("DA         : %.2f\n", emp[i].da);
                        printf("Net Salary : %.2f\n", emp[i].netSalary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        printf("\nEmployee Found!\n");
                        printf("ID         : %d\n", emp[i].id);
                        printf("Name       : %s\n", emp[i].name);
                        printf("Basic      : %.2f\n", emp[i].basic);
                        printf("HRA        : %.2f\n", emp[i].hra);
                        printf("DA         : %.2f\n", emp[i].da);
                        printf("Net Salary : %.2f\n", emp[i].netSalary);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee not found.\n");
                }
                break;

            case 4:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}