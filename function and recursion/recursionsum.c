#include<stdio.h>
int addnumbers (int n);
int main(){
    int num;
    printf("Enter a num\n");
    scanf("%d" , &num);
    printf("Sum = %d\n" , addnumbers(num));
    
    return 0;
}
int addnumbers (int n){
    if (n!=0){
        return n +addnumbers(n-1);
    }
    else{
        return n;

    }
}
// taking 20 as an input

/* Initially, addNumbers() is called from main() with 20 passed as an argument.

The number 20 is added to the result of addNumbers(19).

In the next function call from addNumbers() to addNumbers(), 19 is passed which is added to the result of addNumbers(18). This process continues until n is equal to 0.

When n is equal to 0, there is no recursive call. This returns the sum of integers ultimately to the main() function. */

