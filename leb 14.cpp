#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,words = 1;
	printf("enter a sentence:");
	fgets(str,sizeof(str),stdin);
	//count spaces to count words
	for(i = 0;str[i] !='\0';i++){
		if(str[i] == ' '){
			words++;
		}
	}
	printf("number of words =%d",words);
}