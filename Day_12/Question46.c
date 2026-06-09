#include<stdio.h>
int armstrong(int x){
    int d,sum=0;
    while(x > 0){
        d = x % 10;
        sum = sum + d*d*d;
        x = x/10;
    }
    return sum;
}
int main(){
    int n , result;
    printf("Enter a number : ");
    scanf("%d",&n);
    result = armstrong(n);
    if(result == n){
        printf("%d is an armstrong number.",n);
    }
    else{
       printf("%d is not an armstrong number.",n);  
    }
   return 0; 
}