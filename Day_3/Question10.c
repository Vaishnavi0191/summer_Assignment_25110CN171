#include<stdio.h>
int main(){
    int a,b,i,j,prime = 1;
    printf("Enter lower limit : ");
    scanf("%d",&a);
    printf("Enter upper limit : ");
    scanf("%d",&b);
    if(a <= 0 && b <= 0 || a == b){
        printf("INVALID RANGE");
        return 1;
    }
    printf(" Prime numbers between %d and %d are :\n ",a,b);
    for(i = a ; i <= b ; i++){
        if(i <= 1){
           continue;
        }
        prime = 1;
        for( j=2 ; j <= i/2 ; j++){
            if(i % j == 0){
                prime = 0;
                break;
            }
        }
        if(prime == 1){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}