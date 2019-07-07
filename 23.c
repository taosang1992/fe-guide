#include <stdio.h>

int main() {
	double a,b;
	scanf("%lf,%lf",&a,&b);
	a > b ? printf("%f,%f\n",b,a) : printf("%f,%f\n",a,b);
	return 0;
}