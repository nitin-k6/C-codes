#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter an number\n");
    scanf("%d" , &n);
    for(int i=0; i<=n;i++){
        sum +=i;
        printf("the sum from 1 to 10 is %d\n" ,sum);


    }
    return 0;
}