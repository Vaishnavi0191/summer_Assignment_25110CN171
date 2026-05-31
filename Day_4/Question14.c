#include<stdio.h>
int main(){
    int n;
    long long f1 = 0;
    long long f2 = 1;
    long long nthterm = 0;
    printf("Enter the position (n) :");
    scanf("%d",&n);
    if(n <= 0){
        printf("Error : please enter a number greater than 0.\n");
        return 1;

    }
    if(n == 1){
        nthterm = f2;

    }
    else if( n == 2){
        nthterm = f2;
    }
    else{
        for( int i = 3 ; i <= n ; i ++){
            nthterm = f1 + f2;
            f1 = f2;
            f2 = nthterm;
        }
    }
    printf("The n-th Fibonacci term is : %lld\n",nthterm);
    return 0;
    
    

}
