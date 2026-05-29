#include<stdio.h>
int main(){
    int i , n , rev = 0,d,temp;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp = n;

    if(temp == 0){
     printf(" 0 is a palindrome ");   
    }
    else{
    while(temp > 0){
        d = temp%10 ;
        rev = rev*10 + d;
        temp = temp/10 ;
    }
    if(rev == n){
       printf("%d is a palindrome",n);
    }
    else{
     printf("%d is not a palindrome",n);   
    }
}
    return 0;
}