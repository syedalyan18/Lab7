#include<stdio.h>
int main(){
	int EmIDs[12],ID,i,found=0;
	printf("Enter 12 Employee IDs\n");
	for(i=0;i<12;i++){
		scanf("%d",&EmIDs[i]);
	} printf("Do you want to check employee Id?\n");
	  scanf("%d",&ID);
	  for(i=0;i<12;i++){
	  	if(ID == EmIDs[i]){
	  		found =1;
	  		break;
		  }
	  }
	  if(found==1){
	  	printf("Id exists in array");
	  } else{
	  	 	printf("Id exists in array");
	  }
}
8
