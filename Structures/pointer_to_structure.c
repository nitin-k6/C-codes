#include<stdio.h>
#include<string.h>


struct employee{
int age;
float salary;
char name[10];
};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr =&e1; 
     
    // ptr -> age = 100;  or we  can also  write     
    (*ptr).age = 100;  // -> is called arrow operator 
     printf("%d\n" , e1.age); // we can also write (*ptr).age instead of e1.age
        
    

    return 0;
}
