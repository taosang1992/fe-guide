#include <stdio.h>

int main() {
	char level;
	scanf("%c",&level);
	switch(level){
		case 'A':
			printf("该生分数在85~100之间\n");
			break;
		case 'B':
			printf("该生分数在70~84之间\n");
			break;
		case 'C':
			printf("该生分数在60~79之间\n");
			break;
		case 'D':
			printf("该生的分数在60以下\n");
			break;
		default:
			printf("该生的等级输得不对\n");	
	}
	return 0;
}