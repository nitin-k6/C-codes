#include<stdio.h>

int main(){
    char ch;
    printf(" Enter a character\n");
    scanf("%c" , &ch);
    if(ch >=97 && ch <=122){
        printf("%c is a lowercase character\n" , ch);
    }
    else{
        printf(" %c is a uppercase character\n" , ch);
    }
    return 0;
}