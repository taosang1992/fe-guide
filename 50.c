#include <stdio.h>

int main() {
	int i = 0;
	int p = (int)&i;
	printf("0x%x\n",p);
	printf("%p\n",&i);
	return 0;
}