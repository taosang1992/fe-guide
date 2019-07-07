#include <stdio.h>

int main() {
	char a,b;
	printf("请输入一个大写字母:");
	scanf("%c",&a);
	b = a + 32;
	printf("%c 的小写字母是 %c",a,b);
	return 0;
}