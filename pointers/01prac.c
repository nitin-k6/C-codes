#include<stdio.h>

int main(){
    int a;
    int * ptr;
    ptr = &a;
    printf("The address of variable a is %u\n" , ptr);
    printf("The value of variable a is %d\n" , *ptr);
    printf("The value of variable a is %d\n" , a);

    

    return 0;
}