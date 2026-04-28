# include <stdio.h>
main() {
	int a,b; // a > b 
	printf ("enter Dividend : ");
	scanf("%d",&a);
	printf ("enter Divisor : ");
	scanf("%d",&b);
	int q = a/b;
	int r = a - b*q; // Divisor * Quotient + Remainder = Dividend 
	printf ("The Remainder When %d is dividend by %d is : &d",a,b,r);
	
	return 0;
}
