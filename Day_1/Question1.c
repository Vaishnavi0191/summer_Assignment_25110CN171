#include<stdio.h>
int main(){
    int n,sum=0,i;
    printf("Enter the natural number upto which sum has to be calculated :");
    scanf("%d",&n);
    for( i = 0 ; i <= n ; i++){
        sum = sum + i;
    }
    printf("The sum upto %d is : %d", n,sum);
    return 0;
}