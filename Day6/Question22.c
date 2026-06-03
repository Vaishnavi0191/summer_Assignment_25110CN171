#include<stdio.h>
int main(){
    long long binary;
    int decimal = 0;
    int base = 1;
    printf("Enter a binary number : ");
    scanf("%lld",&binary);
    while(binary > 0){
        int last_digit = binary % 10;
        binary = binary / 10;
        decimal += last_digit * base;
        base = base * 2;
    }
    printf("The decimal representation is : %d\n",decimal);
    return 0;
}