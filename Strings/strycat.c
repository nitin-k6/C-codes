#include<stdio.h>
#include<string.h>


int main(){
     char str1[50]= "Hello";
     char *str2 ="Nitin";
     strcat(str1 , str2); //S1 now contains HelloNitin <No space in-between>
     printf("Now the st1 is %s\n" , str1); 
    return 0;
}