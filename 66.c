#include <stdio.h>

int main() {
	char *p1[5] = {
		"Apple",
		"Facebook",
		"Google",
		"Tencent",
		"Alibaba"
	};
	int i;
	for(i = 0; i<5; i++){
		printf("%s\n", p1[i]);
	}
	return 0;
}