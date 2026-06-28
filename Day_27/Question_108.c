#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
};
int main()
{
    struct Student s;
    int choice;
    do
    {
        printf("\n MARKSHEET GENERATION SYSTEM \n");
        printf("1. Enter Student Details\n");
        printf("2. Display Marksheet\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s.roll);

                printf("Enter Name: ");
                scanf("%s", s.name);

                printf("Enter Marks of Subject 1: ");
                scanf("%d", &s.m1);

                printf("Enter Marks of Subject 2: ");
                scanf("%d", &s.m2);

                printf("Enter Marks of Subject 3: ");
                scanf("%d", &s.m3);

                printf("Enter Marks of Subject 4: ");
                scanf("%d", &s.m4);

                printf("Enter Marks of Subject 5: ");
                scanf("%d", &s.m5);

                s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
                s.percentage = s.total / 5.0;

                printf("Student details saved successfully!\n");
                break;
            case 2:
                printf("\n MARKSHEET \n");
                printf("Roll Number : %d\n", s.roll);
                printf("Name        : %s\n", s.name);
                printf("Subject 1   : %d\n", s.m1);
                printf("Subject 2   : %d\n", s.m2);
                printf("Subject 3   : %d\n", s.m3);
                printf("Subject 4   : %d\n", s.m4);
                printf("Subject 5   : %d\n", s.m5);
                printf("Total Marks : %d\n", s.total);
                printf("Percentage  : %.2f%%\n", s.percentage);
                if(s.percentage >= 60)
                    printf("Grade       : First Division\n");
                else if(s.percentage >= 45)
                    printf("Grade       : Second Division\n");
                else if(s.percentage >= 33)
                    printf("Grade       : Third Division\n");
                else
                    printf("Grade       : Fail\n");
                break;
            case 3:
                printf("Thank you!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 3);
    return 0;
}