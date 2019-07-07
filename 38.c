#include <stdio.h>

int main() {
	int i,a[10]={0,1,2,3,4,5,6,7,8,9};
	for(i=9;i>=0;i--){
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}