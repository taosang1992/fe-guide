#include <stdio.h>

int main() {
	char level;
	scanf("%c",&level);
	switch(level){
		case 'A':
		case 'B':
			printf("该生分数在70~100之间\n");
			break;
		case 'C':
		case 'D':
			printf("该生的分数在70以下\n");
			break;
		default:
			printf("该生的等级输得不对\n");	
	}
	return 0;
}