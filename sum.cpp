#include<stdio.h>
main(){
	int a[5];
	int i,sum=0;
	for(i=0;i<5;i++){
		printf("\n enter a[%d]",i);
		scanf("%d",&a[i]);
		sum = sum=a[i];
	}
	for(i=0;i<5;i++){
		printf("\n a[%d]=%d",i,a[i]);
	}
	printf("\n sum=%d",sum);
}
