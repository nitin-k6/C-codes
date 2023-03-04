// addition of a number to pointer (subtraction of a number to pointer)
//  incrementing pointer variable (decrementing pointer variable)
#include<stdio.h>

int main(){
    int i =4; 
    int *ptr = &i;     
    // If we replace int with char then it takes 1 byte
    printf("The address of the pointer is %u\n" , ptr);
   ptr = ptr +1;     // ptr = ptr-1(opposite operation) ---> decrementing pointer variable  
     // same thing as ptr++ i.e does same operation
   //ptr++
//    ptr++;
  // ptr=ptr+2;  --->    8 bytes
    printf("The address of the pointer is %u\n" , ptr);
  //  so does for the float
    
    return 0;
}