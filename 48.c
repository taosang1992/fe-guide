#include <stdio.h>

int main() {
	int production(int n);
	int n;
	printf("请输入1个整数：");
	scanf("%d",&n);
	printf("%d!=%d\n",n,production(n));
	return 0;
}