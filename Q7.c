#include<stdio.h>
int main(){
    char arr[100];
    int i, sum=0;
    printf("Enter text with letters,digits and spaces:\n");
     scanf("%[^\n]",arr);
    for(i=0; arr[i] !='\0';i++){
     if(arr[i]>='0' && arr[i]<='9'){
        sum+=arr[i] - '0';
     }
    } printf("Sum of all extracted digits is %d",sum);
    return 0;
}