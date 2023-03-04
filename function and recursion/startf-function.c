#include<stdio.h>
void display(); // Function  prototypes

int main(){
    int a;
    printf("Intializing work\n");
     display(); // function call
     printf(" display function finished its work\n");
    return 0;
}

// function definition
void display(){
 printf("this is display\n");
}