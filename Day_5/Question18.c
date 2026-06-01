#include<stdio.h>
int main(){
   int num,temp,rem,i;
   int sum = 0;
   long fact;
   printf("Enter an integer : ");
   scanf("%d",&num);
   temp = num;
   while(num > 0){
    rem = num % 10;
    fact = 1;
    for(i = 1 ; i <= rem ; i++){
        fact = fact * i;
    }
    sum += fact;
    num = num / 10;
   } 
   if(sum == temp){
    printf("%d is a strong number\n",temp);
   }
   else{
    printf("%d is not a strong number.\n",temp);
   }
   return 0;
}