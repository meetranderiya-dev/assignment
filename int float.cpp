#include<stdio.h>
float areaofcircle(float radius){
	return 3.14 * radius * radius;
}
int main(){
	int choice;
	float r, area;
	printf("press 1 to find area of circle:");
	scanf("%d",&choice);
	if (choice == 1){
		printf("area of circle = %.2f\n",area);
	}else{
		printf("invalid choice\n");
	}
}
