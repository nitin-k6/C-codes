#include<stdio.h>

int main(){
    char st1[30];
    char st2[30];
    char c;
    int i=0;

    printf("Enter the value of first string\n" );
    scanf("%s" , st1);
    printf("Enter the value of second string character by character\n" );

    while(c!='\n'){
        fflush(stdin);
        scanf("%c" , &c);
        st2[i]=c;
        i++;
    }
        st2[i]='\0';
        
        printf("The value of the first string is %s\n" , st1);
        printf("The value of the second string is %s\n" , st2);

    return 0;
}