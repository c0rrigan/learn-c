#include <stdio.h>

int main(){
    int c;
    while((c=getchar())!=EOF){
	putchar(c);
    }
    printf("%i",EOF);
    return 0;
}
