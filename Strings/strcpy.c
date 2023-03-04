#include<stdio.h>
#include<string.h>


int main(){
    char *st ="Ufc";
    char st2[45];
    strcpy(st2 ,st);     // if we write st first instead of st2 in closed braces then no output
    printf("The st2 is %s" ,st2); //st2 is a target string and st1 is a source string
    return 0; // st2 should be bigger enough to store source string
}