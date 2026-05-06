#include<stdio.h>
main(){
	int num;
	printf("\n enter number:");
	scanf("%d",&num);
	if(num%2 == 0){
		goto Even;
	}
	else{
		goto odd;
}
	Even:{
		printf("\n Even num");
		return;
}
}
