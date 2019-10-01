#include <stdio.h>

int main()
{
	char a = 'F';
	int f = 123;
	char *pa = &a;
	int *pb = &f;
	printf("a = %c\n", *pa);
	printf("f = %d\n", *pb);
	
	*pa = 'C';
	*pb += 1;
	
	printf("now, a = %c\n", *pa);
	printf("now, f = %d\n", *pb);
	
	printf("size of a = %d\n", sizeof(pa));
	printf("size of b = %d\n", sizeof(pb));
	
	printf("The address of pa = %p\n", pa);
	printf("The address of pa = %p\n", pb);
	return 0; 	
}
