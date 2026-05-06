//else-if ladder
/*
if(condition 1){
//block
}
else if (condition 2){
//block
}
else{}
*/
#include<stdio.h>
main(){
	int x,y;
	printf("\n enter x axix value an y axis value");
	scanf("%d %d",&x, &y);
	 if(x>0 && y>0){
		printf("\n frist");
   }
	else if(x<0 && y>0){
		printf("\n second");
	}
	else if(x<0 && y<0){
		printf("\n third");
	}
	else if(x>0 && y<0){
		printf("\n forth");
	}
	else {
		printf("\n enter");
	}
}
