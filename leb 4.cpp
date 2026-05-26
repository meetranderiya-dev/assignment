#include<stdio.h>
main(){
	int num,i;
	//taking input from the user
	printf("enter an integer:");
	scanf("%d",&num);
	//printing multiplication table
	printf("multiplication table of %d:\n",num);
	for(i=1;i<= 10;i++){
		printf("%d x %d =%d\n",num,i,num*i);
	}
}
