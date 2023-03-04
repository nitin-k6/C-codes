#include<stdio.h>
#include<string.h>

struct employee
{                         // this define new user defined data-type.
    int code;     
    float salary;
    char name[10];
};



int main(){
    int a=50;
    float b=22.50;
    char c='d';

    
struct employee e1;      // creating a structure variable.
e1.code =100;
e1.salary =54.45;
strcpy(e1.name ,"Nitin");

printf("%d\n" , e1.code);
printf("%f\n" , e1.salary);
printf("%s\n" , e1.name);



    return 0;
}
