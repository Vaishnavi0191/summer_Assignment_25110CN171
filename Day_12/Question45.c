#include<stdio.h>
int palindrome(int n){
    int d,rev = 0;
    int temp = n;
    d = temp%10;
    while(n > 0){
    rev = rev*10 + d;
    temp = temp/10;
    }
    return rev;
}
int main(){
    int x,result;
    printf("Enter a number : ");
    scanf("%d",&x);
    result = palindrome(x);
    if(result == x){
        printf("%d is a palindrome.",x);
    }
    else{
       printf("%d is not a palindrome.",x); 
    }
    return 0;
}