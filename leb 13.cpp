#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,vowels = 0,consonants = 0;
	printf("enter a string: ");
	fgets(str,sizeof(str),stdin);
	for(i = 0;str[i]!='\0';i++){
		//check vowels
		if (str[i] == 'a' || str[i] =='e' || str[i] == 'i' ||
		   str[i] == 'o' || str[i] =='u' || 
		   str[i] == 'A' || str[i] =='E' || str[i] == 'I' ||
		   str[i] == 'O' || str[i] =='U'){
		   	
		   	vowels++;
		   }
		   //check consonants
		   else if ((str[i]>='a' && str[i]<='z') ||
		             (str[i]>='A' && str[i]<='Z')) {
		             	consonants++;
		}
	}
	printf("number of vowels =%d\n",vowels);
	printf("number of consonants =%d\n",consonants);
}