/**
 * Exmple of function with pointer as argument
 *
 */
#include <stdio.h>

printArray(int* ptr);
void main(){

    int numbers[]={89,45,23,54};
    printArray(&numbers[0]);
}

void printArray(int *ptr){
    printf("numbers[1]: %i",*ptr);
}
