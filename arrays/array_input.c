#include<stdio.h>

int main(){
    int marks[4]; // alocate space for 4 integers
    printf("Marks obtained by students 1:");
    scanf("%d" , &marks[0]);
    printf("Marks obtained by students 2:");
    scanf("%d" , &marks[1]);
    printf("Marks obtained by students 3:");
    scanf("%d" , &marks[2]);
    printf("Marks obtained by students 4:");
    scanf("%d" , &marks[3]);

printf("The marks are %d  %d  %d and %d"  ,marks[0] ,marks[1] , marks[2] , marks[3]);
    return 0;
}
