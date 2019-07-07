#include <stdio.h>

int main() {
	double a;
	int ge,shi,bai;
	printf("请输入数字\n");
	scanf("%lf",&a);
	bai = (int)(a / 100);
	shi = (int)((a- bai * 100)/ 10);
	ge = (int)(a- bai * 100 - shi * 10);
	printf("个位数字%d\n",ge);
	printf("十位数字%d\n",shi);
	printf("百位数字%d\n",bai);
	return 0;
}