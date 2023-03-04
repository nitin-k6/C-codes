#include<stdio.h>
void sumandAverage(int a , int b , int *sum , float *average ){
    * sum = a + b;
    *average =(float)(*sum)/2;
}

int main(){
    int i, j, sum;
    float average;
    i=3;
    j=6;
    sumandAverage(i , j , &sum , &average);
    printf("The value of sum is %d\n" , sum);
    printf("The value of average is %f\n" , average);

    
    return 0;
}