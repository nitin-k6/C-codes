#include<stdio.h>
#include<string.h>
// This function us used to compare two strings.Itreturns 0 if strings are equal

int main(){
     char str1[50]= "Hello";
     char *str2 ="Nitin"; // hello and Hello are not equal
      int val =strcmp(str1 , str2); //S1 now contains HelloNitin <No space in-between>
     printf("Now the val is %d\n" , val); 
    return 0;
}