#include <stdio.h>
#include <string.h>

int main() {
//	char buffer[] = "";
//	printf("The length of buffer is %lu",strlen(buffer));
	char s1[] = "Abc";
	char s2[] = "abc";
	if(strcmp(s1,s2)==0){
		printf("%d\n",strcmp(s1,s2));
	}else{
		printf("%d\n",strcmp(s1,s2));
	}
	return 0;
}o