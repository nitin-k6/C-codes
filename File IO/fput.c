#include<stdio.h>

int main(){
    FILE*fptr;
    fptr=fopen("doggo.txt" , "w");
    fputc('a' , fptr);
    fclose(fptr);
    return 0;
}