#include <stdio.h>

int main() {
	int a ;
	int *p = &a;
	printf("please enter a integer:");
	scanf("%d",&a);
	printf("a = %d\n", a);
	
	printf("please enter a integer:");
	scanf("%d",p);
	printf("a = %d\n", a);
	return 0;
}