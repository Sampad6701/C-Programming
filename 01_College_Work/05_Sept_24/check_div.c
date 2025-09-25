// Check whether a given number is divisible by 5 and 11 or not

#include <stdio.h>
int main() {
	int n;
	printf("Enter a number to check whether it's divisible by 5 and 11 or not : ");
	scanf("%d", &n);
	
	if(n % 5 == 0 && n % 11 == 0) 
		printf("%d is divisible by both 5 and 11.", n);
	else
		printf("%d is not divisible by both 5 and 11.", n);
	
	return 0;
}

/*
--- OUTPUT ---

Enter a number to check whether it's divisible by 5 and 11 or not : 33
33 is not divisible by both 5 and 11.

Enter a number to check whether it's divisible by 5 and 11 or not : 55
55 is divisible by both 5 and 11.

*/