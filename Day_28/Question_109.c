#include <stdio.h>
struct Book
{
    int id;
    char name[50];
    char author[50];
};
int main()
{
    struct Book book[100];
    int n = 0;
    int choice, i, id, found;
    do
    {
        printf("\n LIBRARY MANAGEMENT SYSTEM \n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &book[n].id);

                printf("Enter Book Name: ");
                scanf("%s", book[n].name);

                printf("Enter Author Name: ");
                scanf("%s", book[n].author);
                n++;
                printf("Book added successfully!\n");
                break;
            case 2:
                if(n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\n Book Records \n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("Book ID     : %d\n", book[i].id);
                        printf("Book Name   : %s\n", book[i].name);
                        printf("Author Name : %s\n", book[i].author);
                    }
                }
                break;
            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(book[i].id == id)
                    {
                        printf("\nBook Found!\n");
                        printf("Book ID     : %d\n", book[i].id);
                        printf("Book Name   : %s\n", book[i].name);
                        printf("Author Name : %s\n", book[i].author);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Book not found.\n");
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