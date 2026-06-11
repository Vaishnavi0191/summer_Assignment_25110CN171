#include <stdio.h>
int main() {
    int arr[100], n, i, a, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find frequency: ");
    scanf("%d", &a);

    for(i = 0; i < n; i++) {
        if(arr[i] == a) {
            count++;
        }
    }

    printf("Frequency of %d = %d", a, count);

    return 0;
}