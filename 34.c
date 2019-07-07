#include <stdio.h>

int main() {
	int sum = 0, n = 1, a = 2;
	do{
		n += 1;
		sum += a;
		a += 2;
	}while(n<=50);
	printf("计算结果是%d\n",sum);
	return 0;
}