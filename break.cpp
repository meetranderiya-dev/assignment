#include<stdio.h>
main(){
	int i,choice;
	for(i=1;i<=10;i++){
		if(i==5){
			break;
		}
		printf("\n i=%d",i);
	}
	for(;;){
		printf("\n enter your choice:");
		scanf("%d",&choice);
		if(choice == 0){
			break;
		}
	}
}
