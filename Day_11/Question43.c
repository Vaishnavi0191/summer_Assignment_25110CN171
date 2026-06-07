#include<stdio.h>
int prime(int x){
   int prime = 1;
   for(int i = 2; i <= (x/2); i++){
    if(x % i == 0){
    return 0;   
      }
   }
   return 1;
}
int main(){
    int result , a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a == 0 || a < 0 || a == 1){
        printf("Invalid Input");
        return 0;
    }
    result = prime(a);
    if(result == 1){
        printf("%d is a prime number.",a);
    }
    else{
        printf("%d is not a prime number.",a);
    }
    return 0;
}