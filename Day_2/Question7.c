#include<stdio.h>
int main(){
    int i,n,temp,d,mul = 1;
    printf("Enter the number:");
    scanf("%d",&n);
    temp = n;
    if( temp == 0){
         printf("The product of digits of %d is : 0",n);
    }
    else{
    while(temp>0){
        d = temp%10 ;
        mul = mul*d;
        temp = temp/10;
    }
    printf("The product of digits of %d is : %d",n,mul);
}
    return 0;
}