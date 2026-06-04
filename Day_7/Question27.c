#include<stdio.h>
    int sum(int n){
    if(n == 0){
        return 0;
    }

    return (n % 10 ) + sum(n / 10);
}
int main(){
    int n,result;
    printf("Enter an integer : ");
    scanf("%d",&n);
    if(n < 0){
        n = -n;
    }
    result = sum(n);
    printf("Sum of digits is : %d",result);
    return 0;
}