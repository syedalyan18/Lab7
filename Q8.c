#include<stdio.h>
int main(){
    int arr[10];
    int i, order;
    printf("Enter an array of 10 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);}
        for(i=0;i<10;i++){
        if(arr[i]>arr[i+1]){
            order++;
    } }
    if(order == 1){
        printf("Ascending order\n");
    } else{
          printf("Descending order\n");
    }
     return 0;
}