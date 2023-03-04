#include<stdio.h>
void printArray(int *ptr , int n){
    for(int i=0; i<n; i++){
        printf("The value of element %d is %d\n" , i+1, *(ptr+i)); // ptr+i will have address of ith elemnet
    }
}
int main(){
    int arr[] = {34,53,83,99,56,35};  
    printArray(arr , 6);   // writing different no. of array value will give garbage value
    return 0;
}