#include <stdio.h>
/*print Farenheit-Celcius table*/

#define STEP 20
int main(){
 float fahr,celcius;
 int lower,upper;

 lower = 0;
 upper = 300;

 fahr = lower;

 while(fahr <=upper){
    celcius = (5.0/9.0) * (fahr-32.0);
    printf("%0.3f %6.1f\n",fahr,celcius);
    fahr = fahr+STEP;
 }
 return 0;
}
