#include<stdio.h>

int main(){
    int i=0;
    printf("Enter an value\n");
    scanf("%d" , &i);
    while (i>=10 && i<=20){
        printf("the value is %d\n" ,i);
        i++;
    }
    return 0;
}