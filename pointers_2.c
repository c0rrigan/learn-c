#include <stdio.h>

void main(){
   int numbers[]={67,69,56};
   int *numbers_ptr;

   numbers_ptr=&numbers[0];
   printf("numbers[0]%i\n",*numbers_ptr++);
   printf("numbers[1]%i\n",*numbers_ptr++);
   printf("numbers[2]%i",*numbers_ptr);
}
