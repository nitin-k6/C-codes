#include<stdio.h>

int main(){
    int marks[4];
    int *ptr = &marks[0]; // we can also simply write marks

    for(int i=0; i<4 ; i++){
        printf("Enter the value of marks for students %d:\n" , i+1);
        scanf("%d" , ptr);
        ptr++;
    }

for(int i=0; i<4 ; i++){
        printf("The value of marks for students %d is %d\n" , i+1 , marks[i]);
        
    }

    return 0;
}