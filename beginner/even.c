#include <stdio.h>

int main(void) {
	int num;
	printf("\n\nTo find a number is Even or Odd");
	printf("\nEnter any number");
	scanf("%d",&num);
	if((num%2)==0)
	printf("\nThe number %d is even",num);
	else
	printf("\nThe number %d is odd",num);
	// your code goes here
	return 0;
}
