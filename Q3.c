#include<stdio.h>
int main(){
    int ages[8], min, i;
    printf("Enter ages of 8 Partcipants:\n");
    for(i=0 ; i<8 ; i++){
        scanf("%d",&ages[i]);
        if(ages[i] <min){
            min = ages[i];
        }
    } printf("Minimum age of Participant is:%d ",min);
      return 0;
}