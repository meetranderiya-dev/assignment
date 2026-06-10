#include<iostream>
#include<string.h>
#define MAX_TASKS 5
#define MAX_LENGTH 10
char tasks[MAX_TASKS] [MAX_LENGTH];
int main(){
	int i;
	printf("enter up to 5 tasks:\n");
	for(i=0;i<MAX_TASKS;i++){
		printf("Task %d:",i + 1);
		fgets(tasks[i],MAX_LENGTH,stdin);
		tasks[i][strcspn(tasks[i],"\n")]
	='\0';
	}
	printf("\n task list :\n ");
	for(i=0;i<MAX_LENGTH;i++){
		printf("%d. %s\n",i + 1,tasks[i]);
	}
	return 0;
}