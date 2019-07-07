#include <stdio.h>

int main() {
	int n;
	for(n=100;n<=300;n++){
		if(n % 4 == 0){
			continue;
		}
		printf("%d\t",n);
	}
	return 0;
}