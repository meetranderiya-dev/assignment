#include<stdio.h>

//Recursive function to find fibonacci number
int fibonacci(int n){
if (n == 0)
	return 0;
	else if (n == 1)
	return 1;
	else
	return fibonacci(n - 1)+ fibonacci(n - 2);
}
int main() {
	int N,i;
    printf("Enter the number of terms: ");
	scanf("%d", &N);
	printf("fibonacci sequence:\n");
	for(i=0;i<N;i++){
		printf("%d ",fibonacci(i));
	}
	return 0;
}


