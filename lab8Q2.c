#include<stdio.h>
int main(){
	int stdMarks[10], i,total=0;
	printf("Enter marks for 10 students:\n");
	for(i=0;i<10;i++){
		scanf("%d",&stdMarks[i]);
	} for(i=0;i<10;i++){
		total = total + stdMarks[i];
	}
        int avg = total/10;
        printf("The average of student marks are:%d",avg);
}
