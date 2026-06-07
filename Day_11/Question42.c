#include<stdio.h>
    int maximum(int x,int y,int z){
    if(x>y && y>z){
        return x;
    }
       else if(y > z){
        return y;
       }
        else{
            return z;
        }
    }
    int main(){
        int a,b,c,result;
        printf("Enter first number : ");
        scanf("%d",&a);
        printf("Enter second number : ");
        scanf("%d",&b);
        printf("Enter third number : ");
        scanf("%d",&c);
        result = maximum(a,b,c);
        printf("The maximum number between the given inputs %d , %d and %d is : %d",a,b,c,result);
        return 0;
    }
