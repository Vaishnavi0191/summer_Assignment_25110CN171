#include <stdio.h>
int main() {
    int arr[100], n, i;
    int choice, pos, value, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    do {
        printf("\n MENU \n");
        printf("1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Maximum Element\n");
        printf("4. Insert an Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 2:
                sum = 0;
                for(i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum = %d\n", sum);
                break;
            case 3: {
                int max = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > max)
                        max = arr[i];
                }
                printf("Maximum Element = %d\n", max);
                break;
            }
            case 4:
                printf("Enter position (1 to %d): ", n + 1);
                scanf("%d", &pos);
                if(pos < 1 || pos > n + 1) {
                    printf("Invalid Position!\n");
                } else {
                    printf("Enter value: ");
                    scanf("%d", &value);

                    for(i = n; i >= pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos - 1] = value;
                    n++;
                    printf("Element inserted successfully.\n");
                }
                break;
            case 5:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);
    return 0;
}