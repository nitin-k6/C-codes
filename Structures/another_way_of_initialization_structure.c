#include<stdio.h>
#include<string.h>

struct employee{
int age;
float salary;
char name[10];
};


int main(){
    struct employee nitin ={31, 250.69 , "Nitin"};

    printf("Age is : %d\n" ,   nitin.age);
    printf("Salary is : %fn" , nitin.salary);

    printf("Name is : %s\n" , nitin.name);

    
    return 0;
}