#include <stdio.h>

int main() {
	float max(float x, float y);
	float a[4];
	int i;
	float t,u,v;
	for(i=0;i<=3;i++){
		printf("请输入第%d个数:",i+1);
		scanf("%f",&a[i]);
	}
	
	t = max(a[0],a[1]);
	u = max(a[2],a[3]);
	v = max(t,u);
	printf("前两个数中的最大数为%f\n",t);
	printf("后两个数中的最大数为%f\n",u);
	printf("四个数的最大数为%f\n",v);
	return 0;
}

float max(float x,float y){
	return (x>y?x:y);
}