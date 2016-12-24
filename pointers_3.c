/**
 * Exmple of function with pointer as argument
 *
 */
#include <stdio.h>
void printArray(int* ptr);

void main(){
    int numbers[]={89,45,23,54};
    printArray(&numbers[0]);
}

void printArray(int *ptr){
    for(int i=0;i<4;i++){
    printf("numbers[%i]: %i\n",i,*(ptr+i));
    }
}
