#include <stdio.h>

int main(void) {
	// your code goes here
		int year;
	scanf("%d",&year);
	if(year%400==0)
	printf("leap year");
	else
	printf("not leap year");
	return 0;
}
