#include <stdio.h>
#include <math.h>

int main() {
	double rate = -0.1, year = 10, percent;
	percent = pow(1 + rate, year);
	printf("percent=%f",percent);
	return 0;
}