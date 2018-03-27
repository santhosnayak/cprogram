#include <stdio.h>
int main(void) {
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num>0)
	printf("The number %d is positive",num);
	else if(num<0)
	printf("the number %d is negative",num);
	else
	printf("The number is zero");
	// your code goes here
	return 0;
}
