#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("nitin.txt" , "r");  
    int num;
    int num2;
    if (ptr == NULL){
        printf("The file does not exist\n");
    }
    else{


    fscanf( ptr , "%d" , &num);
    fscanf( ptr , "%d" , &num2);
    fclose(ptr);

    printf("The value of num is %d\n" , num);
    printf("The value of num2 is %d\n" , num2);
    }
    return 0;
}