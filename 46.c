#include <stdio.h>

int main() {
	float aver(float a[],int n);
	float group1[5],group2[10];
	int i;
	printf("请输入第1组学生的成绩:\n");
	for(i=0;i<=4;i++){
		scanf("%f",&group1[i]);
	}
	printf("请输入第2组的学生成绩:\n");
	for(i=0;i<=9;i++){
		scanf("%f",&group2[i]);
	}
	printf("第1组的平均分是%f\n",aver(group1,5));
	printf("第2组的平均分是%f\n",aver(group2,10));
	return 0;
}

float aver(float a[],int n){
	float sum = 0,average;
	int i;
	for(i=0;i<n;i++){
		sum += a[i];
	}
	
	average = sum / n;
	return average;
}