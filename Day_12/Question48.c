#include <stdio.h>
int PerfectNum(int n) {
    if (n <= 0) {
        return 0; 
    }
    int sum = 0; 
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum = sum + i; 
        }
    }
    if (sum == n) {
        return 1; 
    } else {
        return 0; 
    }
}
int main() {
    int n;
    printf("Enter a number to check: ");
    scanf("%d", &n);
    if (PerfectNum(n) == 1) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is NOT a perfect number.\n", n);
    }
    return 0;
}