#include<stdio.h>
int facto(int x){
    int i,fact = 1;
    for(i = 1; i <= x; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int a,result;
    printf("Enter the number whose factorial has to be calculated : ");
    scanf("%d",&a);
    result = facto(a);
    printf("The result is : %d",result);
    return 0;
}