#include<stdio.h>
int main(){
    int i , fact = 1 , n;
    printf("Enter the number whose factorial has to be calculated : ");
    scanf("%d",&n);
    if(n==0 || n==1){
        printf("Fctorial of %d is : 1", n);
    }
    else{
    for(i=1 ; i <= n ; i++){
        fact = fact*i;
    }
    printf("Factorial of %d is : %d",n,fact);
}
    return 0;
}