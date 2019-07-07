#include <stdio.h>

int main() {
	double a,b,t;
	scanf("%lf,%lf",&a,&b);
	if(a > b){
		t = a;
		a = b;
		b = t;
	}
	
	printf("%f,%f\n",a,b);
	return 0;
}