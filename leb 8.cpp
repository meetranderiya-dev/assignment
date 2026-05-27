 #include<stdio.h>
 int main() {
 	int num,i,isPrime = 1;
 	
 	//input from user
 	printf("Enter a number: ");
 	scanf("%d",&num);
 	//0 and 1 are not prime numbers
 	if(num <= 1){
 		isprime = 0;
	 }else{
	 	//check for factors using for loop
	 	for(i = 2;i < num;i++){
	 		if(num % i == 0){
	 			isprime = 0;
	 			break;
			 }
		 }
	 }
	 //display result
	 if(isprime == 1){
	 	printf("%d is a prime number .\n",num);
	 } else {
	 	printf("%d is not a prime number.\n",num);
	 }
 	
 	return;
 }
