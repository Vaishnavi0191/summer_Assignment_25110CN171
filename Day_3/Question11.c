#include<stdio.h>
int main(){
    int a,b,i,gcd = 1;
    printf("Enter two numbers whose GCD has to be calculated : ");
    scanf("%d%d",&a,&b);
    if(a == 0){
        printf("The GCD is : %d\n",b);
    }
    else if(b == 0){
        printf("The GCD is : %d\n",a);
    }
    else{
    for( i = 1; i <= a && i <= b ; ++i){
        if( a % i == 0 && b % i == 0){
            gcd = i;
        }
        
    }
}
   printf("The GCD is : %d\n",gcd);
    return 0;
}