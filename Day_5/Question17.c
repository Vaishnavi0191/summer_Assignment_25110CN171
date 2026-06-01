#include<stdio.h>
int main(){
  int num,i,dsum = 0;
  printf("Enter a positive integer : ");
  scanf("%d",&num);
  if(num <= 0){
    printf("%d is not a perfect number",num);
    return 0;
  } 
  for( i = 1; i <= num/2 ; i++){
    if(num % i == 0){
        dsum += i;
    }
  } 
  if(dsum == num){
    printf("%d is a perfect number\n",num);  
  }
  else{
    printf("%d is not a perfect number.\n",num);
  }
  return 0;
}