#include<stdio.h>
int main(){
    int i , n , rev = 0,d,temp;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp = n;
    if(temp == 0){
     printf("The reverse of %d is : 0",n);   
    }
    else{
    while(temp > 0){
        d = temp%10 ;
        rev = rev*10 + d;
        temp = temp/10 ;
    }
    printf("The reverse of %d is : %d",n,rev);
}
    return 0;
}