#include<stdio.h>
#include<string.h>
main(){
	char pwd[20],l,str[20];
	printf("\n enter password:");
	scanf("%s",pwd);
	printf("\n password=%s",pwd);
	l=strlen(pwd);
	printf("\n strlen=%d",l);
	strupr(pwd);
	printf("\n upper case=%s",pwd);
	strlwr(pwd);
	printf("\n lower case=%s",pwd);
	strcpy(str,pwd);
	printf("\n second str=%s",str);
	l=strcmp("abc","abc");
	printf("\n output of strcmp=%d",l);
}
