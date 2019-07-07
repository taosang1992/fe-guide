#include <stdio.h>

int main() {
	int n = 1,  a = 2;
	long sum = 1;
	while(n<=50){
		n = n + 1;
		sum = sum * a; 
		printf("%d\n",sum);
		printf("%d\n",a);
		a = a + 2;
	}
	
	printf("计算结果是%d",sum);
	return 0;
}