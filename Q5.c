#include<stdio.h>
int main(){
    int nums[12];
    int write = 0, remNum; //remNum for removing number
    int i;
    printf("Enter an array of 12 numbers:\n");
    for(i=0;i<12;i++){
    scanf("%d",&nums[i]);
    }
    printf("Do you want to remove all occurences of any num?\n");
    scanf("%d",&remNum);
    for(i=0;i<12;i++){
      if(nums[i] != remNum){
      nums[write] = nums[i];
      write++;
      }
    }
      printf("Array after removing certain number %d is\n",remNum);
      for(i=0;i<write;i++){
        printf("%d",nums[i]);
      }
    }