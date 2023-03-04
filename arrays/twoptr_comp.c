
// // We can compare pointers if they are pointing to the same array. 
// Relational pointers can be used to compare two pointers. Pointers can’t be multiplied or divided


#include <stdio.h>
int main() {
   int *p2;
   int *p1;
   p2 = (int *)300;
   p1 = (int *)200;
   if(p1 > p2) {
      printf("P1 is greater than p2");

   } else {
      printf("P2 is greater than p1");
   }
   return(0);
}