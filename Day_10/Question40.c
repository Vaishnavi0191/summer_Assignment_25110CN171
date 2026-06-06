#include <stdio.h>

int main() {
    int i, j, space;

    for (i = 1; i <= 5; i++) {
        for (space = 1; space <= 5 - i; space++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        for (j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}