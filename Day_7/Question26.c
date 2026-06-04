#include<stdio.h>
int fibonacci(int n){
 if(n==0){
    return 0;
 }
 if(n == 1){
    return 1;
 }
 return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
    int term , result;
    printf("Enter the term position");
    scanf("%d",&term);
    if(term < 0){
        printf("Enter a positive integer");
     } else{
            result = fibonacci(term);
            printf("The fibonacci number at position %d is %d\n",term,result);
        }
    return 0;
}