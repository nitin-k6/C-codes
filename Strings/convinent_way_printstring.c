#include<stdio.h>

int main(){
    //char *ptr = "NITIN"; 
     //     or
     char str[] = "NITIN";
    //  ptr ="Akshay kumar"         ----> in case of (6) Nothing happens but un case of (4) Everything happens.
    printf("%s", str );           //   ----> in case of (4) Write ptr
    return 0;
}