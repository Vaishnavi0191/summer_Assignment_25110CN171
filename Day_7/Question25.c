#include<stdio.h>
int fact(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n,result;
    printf("Enter a positive integer : ");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial of a negative number doesn't exist.\n");
    }
    else{
        result = fact(n);
        printf("Factorial of %d = %d\n",n,result);
    }
    return 0;
}