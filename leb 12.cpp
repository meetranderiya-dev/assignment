#include<stdio.h>
#include<iostream>
//function to reverse the string
void reversestring(char str[]){
	int i, length;
	char temp;
	
	length = strlen(str);
	for(i = 0;i<length /2; i++){
		temp = str[i];
		str[i]=str[length - i -1];
		str[length - i -1]= temp;
	}
}
int main(){
	char str[100];
	printf("enter a string:");
	scanf("%s",str);
	printf("reversed string: %s",str);
}