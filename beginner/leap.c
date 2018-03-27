#include <stdio.h>

int main(void) {
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%4==0)
	printf("\nthe year %d is leap year",year);
	else
	printf("\nthe year %d is non-leap yaer",year);
	// your code goes here
	return 0;
}
