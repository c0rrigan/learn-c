#import <stdio.h>

void main(){
   
    int number = 90;
    int *number_ptr;
    
    number_ptr = &number;
    
    printf("pointer value : %i\n",*number_ptr);
}
