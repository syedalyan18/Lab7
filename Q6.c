#include<stdio.h>
int main(){
    int arr[10];
    int sum=0, i;
    printf("Enter an array of 10 integers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    } for(i=0;i<10;i++){
        if(arr[i]>0){
        sum+=arr[i];
    }
} printf("The sum of positive integers is %d",sum);
}