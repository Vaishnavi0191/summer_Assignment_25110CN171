#include<stdio.h>
int main(){
    int n,temp,remainder,result=0;
    printf("Enter a three digit integer :");
    scanf("%d",&n);
    temp = n;
    while(temp!= 0){
        remainder = temp % 10;
        result += remainder*remainder*remainder;
        temp = temp/10;
    }
    if(result == n){
        printf("%d is an Armstrong number.",n);
    }
    else{
        printf("%d is not an armstrong number.",n);
    }
    return 0;
}