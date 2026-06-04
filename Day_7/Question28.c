#include<stdio.h>
int reverse(int n, int rev){
    if(n == 0){
        return reverse;
    }
    return reverse(n / 10, rev * 10 + (n % 10));
}
int main(){
    int n,result;
    printf("Enter an integer : ");
    scanf("%d",&n);
    if(n < 0){
        result = reverse(-n,0);
    }
    else{
        result = reverse(n,0);
    }
    printf("Reverse number : %d\n",result);
    return 0;
}
