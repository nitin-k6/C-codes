#include<stdio.h>

int main(){
    int  n = 6 , factorial =1;
   
    for(int i=1; i<=n;i++){
        factorial *= i;
        printf("the factorial %d is %d\n" ,n , factorial);
    }
    return 0;
}