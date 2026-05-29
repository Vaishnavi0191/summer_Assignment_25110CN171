#include<stdio.h>
int main(){
    int n,d,sum=0,temp;
    printf("Enter the number : ");
    scanf("%d",&n);
     temp = n;
    if( n == 0){
        printf("Sum of digits of %d is : 0",n);
    }
    else{ 
    while(temp > 0){
        d = temp % 10;
        sum = sum + d;
        temp = temp / 10;
    }
    printf("Sum of digits of %d is : %d",n,sum);
}
return 0;
}