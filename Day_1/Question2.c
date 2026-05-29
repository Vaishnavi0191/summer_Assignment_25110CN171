#include<stdio.h>
int main(){
    int i,n, Table = 1;
    printf("Enter the number whose table has to be calculated:");
    scanf("%d",&n);
    printf("The required table is :-\n");
    for(i = 1 ; i < 11 ; i++){
        Table = n * i ;
        printf("%d * %d = %d\n",n,i,Table);
    }
    
    return 0;
}