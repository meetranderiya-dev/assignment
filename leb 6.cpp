#include<stdio.h>
int main(){
	int arr[10];
	int i,max,min;
	//input 10 integers
	printf("enter 10 integers:\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	//assume first element is both max and min
	max = arr[0];
	min =arr[0];
	//find maximum and minimum
	for(i = 1;i < 10;i++){
		if(arr[i]>max){
			max = arr[i];
		}
		if(arr[i]<min){
			min =arr[i];
		}
	}
	//display results
	printf("maximum value = %d\n",max);
	printf("minimum value =%d\n",min);
}
