//  addition of a number to a pointer or incrementation pointer
#include<stdio.h>
int main()
{  
     float a=10;
     float* p=&a;
    printf("%u\n",p);
     p=p+3;
     printf("%u",p);
}                 // same thing as incrementation of a pointer