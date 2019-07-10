#include <stdio.h>

int main() {
	// 定义字符串，\0是标志字符串的结束
//	char word[] = {'H','e','l','l','o','!','\0'};

	char *s = "Hello, World";
	char *s2 = "Hello, World";
	char s3[] = "Hello, World";
	s3[0] = 'B';
//	char word[] = "Hello";
//	char line[10] = "Hello";
	printf("Here! %p\n",s);
	printf("Here! %s\n",s);
	printf("Here! %p\n",s2);
	printf("Here! %s\n",s2);
	printf("Here! s3[0]=%c\n",s3[0]);
	return 0;
}