#include<stdio.h>
int main(){
   int number;
   printf("Enter a decimal number :");
   scanf("%d",&number);
   printf("The binary representation is: ");
   for(int i = 15; i >= 0; i--){
    int bit = (number >> i) & 1;
    printf("%d",bit);
   }
   printf("\n");
   return 0;
}
