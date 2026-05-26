#include<stdio.h>
int main(){
int num,digit,sum = 0;
//taking input from user
printf("enter an integer:");
scanf("%d",&num);
//calculate sum of digits using while loop
while(num !=0){
	digit =num % 10;
	sum =sum +digit;
	num = num/ 10;
}
//display result
printf("sum of digits = %d\n",sum);
}
