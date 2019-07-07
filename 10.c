#include <stdio.h>

int main() {
	char a,b,c;
	a = getchar();
	b = getchar();
	c = getchar();
	a = a + 32;
	b = b + 32;
	c = c + 32;
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	return 0;
}