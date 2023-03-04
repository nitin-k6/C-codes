#include<stdio.h>
 struct  vector
 {
    int x;
    int y;
 };
 
       struct vector sumVector(struct vector v1 , struct vector v2){
        struct vector result;
        result.x = v1.x + v2.x;
        result.y = v1.y + v2.y; 
        return result;  
       }

int main(){
       struct vector v1,v2, sum;
       
    v1.x=25;
    v1.y =50;
    printf("The x dimension is %d and y dimension is %d\n" , v1.x , v1.y);
        
     v2.x=10;
    v2.y =20;
    printf("The x dimension is %d and y dimension is %d\n" , v2.x , v2.y);

    sum = sumVector (v1 ,v2);
    printf("The x dimension is %d and y dimension is %d\n" , sum.x , sum.y);

    

    return 0;
}