#include <stdio.h>

int main() {
	char c[3][3] = {
		{' ','*',' '},
		{'*','*','*'},
		{' ','*',' '}
	};
	int i,j;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%c",c[i][j]);
		}
		printf("\n");
	};
	return 0;
}