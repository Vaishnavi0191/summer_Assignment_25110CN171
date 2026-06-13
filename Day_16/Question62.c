#include <stdio.h>
int main() {
 int n, i, j;
     printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int mfreq = 0, melement;
    for(i = 0; i < n; i++) {
        int count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > mfreq) {
            mfreq = count;
            melement = arr[i];
        }
    }
    printf("Element with maximum frequency: %d\n", melement);
    printf("Frequency: %d\n", mfreq);
    return 0;
}
