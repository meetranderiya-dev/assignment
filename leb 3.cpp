#include<stdio.h>
int main(){

int marks;
//taking input from user
printf("enter student marks:");
scanf("%d",&marks);
//checking grade using if-else
if(marks>90){
	printf("grade a\n");
}
else if (marks>75 && marks <= 90){
	printf("grade b\n");
}
else if (marks >50 && marks <= 75){
	printf("grade c\n");
}
else{
	printf("grade d\n");
}
	}
