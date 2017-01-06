#include <stdio.h>
#define STEP 20
double farenheitToCelcius(double far);
int main(){
    float far,cel;
    int lower,upper;
    lower = 0;
    upper = 300;
    far = lower;
    while(far<=upper){
	cel = farenheitToCelcius(far);
	printf("C:%5.1f F:%7.3f\n",cel,far);
	far+=STEP;
    }
	return 0;
}
    double farenheitToCelcius(double far){
	return ((far-32.0)*(5.0/9.0));
    }
