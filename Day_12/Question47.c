#include<stdio.h>
void fibonacci(int n){
    int t1 = 0, t2 = 1;
    int nxterm;
    printf("Fibonacci sequence : ");
    for(int i = 1; i <= n; i++){
        printf("%d ",t1);
        nxterm = t1 + t2;
        t1 = t2;
        t2 = nxterm;
    }
    printf("\n");
}
int main(){
int terms;
    printf("Enter number of terms : ");
    
    if (scanf("%d", &terms) != 1 || terms < 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }
    
    fibonacci(terms);
    return 0;
}