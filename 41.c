#include <stdio.h>

int main() {
	int i,j,max;
	int a[3][3]={{1,2,3},{9,8,7},{-10,10,-5}};
	max = a[0][0];
	for(i=0;i<=2;i++){
		for(j=0;j<2;j++){
			if(a[i][j]>max){
				max = a[i][j];
			}
		}
	}
	printf("最大元素的值为%d\n",max);
	return 0;
}