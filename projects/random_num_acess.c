#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    srand(time(0));
    number = rand()%100 + 1; // Generates a number between 1 to 100 //
    printf("the random number is %d\n" , number);
    // Keep running the loop until number is guesssed //
        return 0;
}