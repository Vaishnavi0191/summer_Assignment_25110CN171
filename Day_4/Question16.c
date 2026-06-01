#include<stdio.h>
#include<math.h>
int main(){
    int start , end , i ,temp , d , digits , sum;
    printf("Enter starting number of range :");
    scanf("%d",&start);
    printf("Enter ending number of range : ");
    scanf("%d",&end);
    printf("Armstrong numbers between %d and %d are :\n",start,end);
    for(i = start ; i <= end ; i++){
        temp = i;
        digits = 0;
        sum = 0;
        while(temp != 0){
            digits++;
            temp = temp/10;
        }
        temp = i;
        while(temp != 0){
            d = temp % 10;
            sum += pow(d , digits);
            temp = temp/10;
        }
        if(sum == i){
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;

}