#include<stdio.h>

    void printArray(int ptr[] , int n){
    for(int i=0; i<n; i++){
        printf("The value of element %d is %d\n" , i+1, ptr[i]); 
    }
    // ptr[2]=56; // This value will change in arr  array of main as well
}
int main (){
     int arr[] = {34,53,83,99,56,35}; 
     printArray(arr , 6);    
    // printf("%d" , arr[2]);
    
    return 0;
}
