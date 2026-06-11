#include <stdio.h>
int main() {
    int arr[100], n, i;
    int large, large2;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    large = large2 = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > large) {
            large2 = large;
            large = arr[i];
        }
        else if(arr[i] > large2 && arr[i] != large) {
            large2 = arr[i];
        }
    }
    printf("Second Largest Element = %d", large2);
    return 0;
}