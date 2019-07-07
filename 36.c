#include <stdio.h>

int main() {
	int n = 99;
	do{
		n += 1;
		if(n % 4 == 0){
			continue;
		}
		printf("%d\t",n);
	}while(n<300);
	
	return 0;
}