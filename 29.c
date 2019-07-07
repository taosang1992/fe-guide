#include <stdio.h>

int main() {
	float sum = 0, t;
	int n = 0;
	while(sum<300){
		printf("请输入第%d只母猴的表演时间（单位为分种）",n + 1);
		scanf("%f",&t);
		sum = sum + t;
		n = n + 1;
	}
	printf("猴博士看了%d只母猴\n",n);
	return 0;
}