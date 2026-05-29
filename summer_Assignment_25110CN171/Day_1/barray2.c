#include<stdio.h>
int main(){
    int arr[5];
    for (int i =0; i<5;i++){
        int a=i;
        printf("enter element number%d:",a);
        scanf("%d",&arr[i]);
    }
   // printf("our desired array=%d",arr[1]);    this was to print a particular value
   // to print an entire array
   for(int i=0; i<5 ; i++){
    printf("%d",arr[i]);
   }
    return 0;
}