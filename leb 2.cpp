#include<stdio.h>
int main(){
	int num;
	//taking input from the user
	printf("enter an integer:");
	scanf("%d",&num);
	//cheking even or odd
	if (num % 2== 0){
		printf("%d is even.\n",num);
	}else{
		printf("%d is odd.\n",num);
	}
	//cheking positive,negative,or zero
	if(num>0){
		printf("%d is positive.\n",num);
	}else if (num < 0){
		printf("%d is negative.\n",num);
	}else {
		printf("the number is zero.\n");
	}
	//cheking multiple of both 3 and 5
	if(num % 3 == 0 && num % 5 == 0){
		printf("%dis a multiple of both 3 and");
	}else{
		printf("%d is not a multiple of both 3");
	}
	return 0;
}
