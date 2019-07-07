#include <stdio.h>

int main() {
	double score;
	printf("请输入分数：");
	scanf("%lf",&score);
	switch((int)(score/10)){
		case 10:
		case 9:
			printf("该生的等级为A\n");
			break;
		case 8:				
			printf("该生的等级为B\n");
			break;
		case 7:				
			printf("该生的等级为C\n");
			break;		
		case 6:
			printf("该生的等级为D\n");	
			break;
		case 5:				
		case 4:				
		case 3:				
		case 2:				
		case 1:				
		case 0:				
			printf("该生的等级为E\n");
			break;
		default:
			printf("你踏马输得是分数吗");
			break;
	}
	return 0;
}