#include<stdio.h>
int main(){
	float num1,num2;
	char op;
	//taking input form user
	printf("enter first number"); 
	scanf("%f",&num1);
	printf("enter operator(+,-,*,/,%):");
	scanf("%f",&op);
	printf("enter second number:");
	scanf("%f",&num2);
	//performing calculation 
	switch(op)	{
	case'+':
		printf("result=%.2f\n",num1+num2);
		break;
	case'-':
		printf("result=%2f\n",num1-num2);
		break;
		case'*':
			printf("result=%.2f\n",num1*num2);
			break;
			case'/':
				if(num2!=0)
				printf("result=%2f\n",num1/num2);
				else
				printf("error:didision by zero is not allowed.\n");
				break;
				case'%':
					//modulus works with integers
					printf("result=%d\n",(int)num1%(int)num2);
					break;
					default:
						printf("invaild operator.\n");
	}	
	
}
