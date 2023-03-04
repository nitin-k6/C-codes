#include<stdio.h>
#include<math.h>

int main(){
    int a = 4;
    int b = 8;

    printf("the value  of a + b is %d\n" , a + b);
    printf("the value of a - b is %d\n" , a - b);
    printf("the value of  a * b is %d\n" , a * b);
    printf("the value  of a / b is %d\n" , a / b);
    // + , - , / , *  are arithmetic operators // 
    int z;
    z = b * a; // Legal
     // b *a = z;  // Illegal
         printf("the value of z is %d, z ");

         printf(" 5 when divided by 2 leaves a reaminder of %d\n" , 5%2);  //  modular operation
         printf(" -5 when divided by 2 leaves a reaminder of %d\n" , -5%2); // modular operation

        //  No operator is assumed to be used
        //  printf(" the value of 4 * 5 is %d\n", (4)(5) );  // it will show 20

         printf("the value of 4 * 5 is %d\n", (4) * (5)); // correct

        //    There is no operator to perform  expotentiaton in C
         printf("the value of the 4 ^ 5 is %d\n" , 4 ^ 5); // will not produce 4 to the power 5
         printf(" the value of the 4 to the power 5 is %f\n", pow (4 , 5)); //  correct and for this we have to use #include<math.h> at the top
            // we have to write '%f' above. Writing '%d' will show 0

         printf(" the value os 5 + 6 is %d\n" ,  5 + 6);
         printf(" the value of 5 + 6.6 is %f\n", 5 + 6.6 );
         printf(" the value of 5.5 + 7.5 is %f\n", 5.5 + 7.5);


         printf(" the value of 5/2 is %d\n", 5/2 );
         printf(" the value of 5.0/2 is %f\n", 5.0/2 );

         printf(" the value of 2/5 is %d\n", 2/5 );
         printf(" the value of 2.0/5 is %f\n", 2.0/5 );



          return 0; 

}