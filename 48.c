#include <stdio.h>

int main() {
	int production(int n);
	int n;
	printf("请输入1个整数：");
	scanf("%d",&n);
	printf("%d!=%d\n",n,production(n));
	return 0;
}

int production(int n){
	int result;
	if(n<0){
		printf("n<0,数字输入得不对！");
	}else if(n==0 || n==1){
		result = 1;
	}else{
		result = production(n-1)*n;
	}
	return result;
}