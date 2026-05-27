#include<stdio.h>
//function to check palindrome
int palindrome(int n){
	int original,reverse = 0,remainder;
	original = n;
	while (n != 0){
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n = n / 10;
	}
	if(original == reverse)
	return 1;
	else
	return 0;
}
int main(){
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(palindrome(num))
	printf("%d is a palindrome number.",num);
	 else
		printf("%d is not a palindrome number.",num);
	}