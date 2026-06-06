#include<stdio.h>
int main(){
    int i,j,ch;
    for(i = 1 ; i < 6 ; i++){
        char ch = 'A';
        for(j = 1 ; j <= i; j++){
            printf("%c ",ch);
            ch = ch + 1;
        }
        printf("\n");
    }
    return 0;
}