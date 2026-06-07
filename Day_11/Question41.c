#include<stdio.h>
int sums(int x , int y){
    int sum = 0;
    sum = x + y;
    return sum;
}
int main(){
    int x,y,sum=0;
    printf("Enter first number : ");
    scanf("%d",&x);
     printf("Enter second number : ");
    scanf("%d",&y);
    sum = sums(x,y);
    printf("The sum of %d and %d is : %d ",x,y,sum);
    return 0;
}