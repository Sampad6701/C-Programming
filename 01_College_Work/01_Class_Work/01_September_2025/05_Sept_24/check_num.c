//	Check whether a given number is negative, positive or zero

#include <stdio.h>
int main() {
	int n;
	printf("Enter a number to check whether it is negative, positive or zero : ");
	scanf("%d", &n);
	
	if(n < 0)
		printf("%d is a negative number.\n", n);
	else if (n == 0) 
		printf("%d is zero.\n", n);
	else
		printf("%d is a positive number.\n", n);
		
	return 0;
}

/*
--- OUTPUT ---

Enter a number to check whether it is negative, positive or zero : -701
-701 is a negative number.

Enter a number to check whether it is negative, positive or zero : 0
0 is zero.

Enter a number to check whether it is negative, positive or zero : 574
574 is a positive number.

*/
