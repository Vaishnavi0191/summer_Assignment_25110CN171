#include<stdio.h>
int main(){
    int number , count = 0;
    printf("Enter a number : ");
    scanf("%d",&number);
    int original_number = number;
    while(number > 0){
        if(number & 1){
            count++;
        }
        number = number >> 1;
    }
    printf("The number of set bits (1s) in %d is : %d\n",original_number,count);
    return 0;
}