#include <stdio.h>

int main(){
    double char_count;

    for(char_count = 0;getchar() != '\n';char_count++)
    ;
    printf("%.0f\n",char_count);

    return 0;
}
