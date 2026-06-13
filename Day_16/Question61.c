#include<stdio.h>
int main() {
    int n, i, sum = 0, esum, missing;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    esum = n * (n + 1) / 2;
    missing = esum - sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}