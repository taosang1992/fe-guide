#include <stdio.h>

int main() {
	double a,b,c,s;
	a = 3.67;
	b = 5.43;
	c = 6.21;
	s  = (a + b + c) / 3;
	printf("设定的 a 是 %f, b 是 %f, c 是 %f\n",a,b,c);
	printf("求得的 s 是 %f\n",s);
	return 0;
}