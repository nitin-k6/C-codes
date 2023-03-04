#include<stdio.h>
#include<conio.h>

int main(){
    FILE*ptr;
    char c;
    ptr=fopen("new.txt", "r");

    while((c=fgetc(ptr))!=EOF){
    printf("%c", c);
}
fclose(ptr);
return 0;
 }