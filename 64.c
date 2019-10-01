#include <stdio.h>

int main() {
	char str[]  = "To be or not to be, that is a question";
	char *target = str;
	int count = 0;
	
	while (*target++ != '\0') {
		count++;
	}
	
	printf("Total = %d\n", count);
	
	return 0;
}