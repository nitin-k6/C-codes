#include<stdio.h>

int main(){
    int i=0;
    printf("enter the value\n");
    scanf("d" , &i);
    while(i<10){
        printf("%d\n");
        i++;
    }
    return 0;
}