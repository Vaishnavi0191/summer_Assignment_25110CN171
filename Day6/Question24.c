#include<stdio.h>
int main(){
double x;
int n;
double result = 1.0;
printf("Enter base(x) : ");
scanf("%lf",&x);
printf("Enter exponent (n) : ");
scanf("%d",&n);
int exponent = n;
if(n < 0){
    n = -n;
}
for(int i = 0; i < n; i++){
    result = result * x;
}
if(exponent < 0){
    result = 1.0 / result;
}
printf("%.21f raised to the power of %d is: %.51f\n",x,exponent,result);
return 0;
}