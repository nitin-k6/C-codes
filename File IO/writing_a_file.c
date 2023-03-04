#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("generated.txt" , "w");
    int number =36;
    fprintf(fptr,"The number is %d\n", number );
    fprintf(fptr,"Thanks for using Nitin" );

    fclose (fptr);
       return 0;
}