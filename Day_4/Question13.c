#include<stdio.h>
int main(){
    int n;
    long long f1 = 0,f2 = 1,nextterm;
    
    printf("Enter the number of terms : ");
    if(scanf("%d",&n) != 1 || n <= 0){
        printf("Error . Enter a positive integer.\n ");
        return 1;
    }
    printf("Fibonacci series upto %d terms :\n",n);
    for(int i = 1; i <= n ; i++){
        printf("%lld\t",f1);
        nextterm = f1 + f2;
        f1 = f2;
        f2 = nextterm;
    }
    printf("\n");
     return 0;
}