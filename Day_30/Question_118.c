#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of books: ");
    scanf("%d", &n);
    int bookId[n];
    char title[n][50];
    char author[n][50];
    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Enter Book ID: ");
        scanf("%d", &bookId[i]);
        printf("Enter Book Title: ");
        scanf("%s", title[i]);
        printf("Enter Author Name: ");
        scanf("%s", author[i]);
    }
    printf("\n Library Records\n");

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", bookId[i]);
        printf("Title   : %s\n", title[i]);
        printf("Author  : %s\n", author[i]);
    }
    return 0;
}