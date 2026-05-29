#include<stdio.h>
int main(){
    int i , n , temp, sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp = n;
    if(temp == 0){
        printf("The number of digits in 0 is : 1");
    }
    else{
    while(temp>0){
        sum = sum + 1;
        temp = temp/10;
    }
    printf("The number of digits in %d is : %d",n,sum);
}
    return 0;
}