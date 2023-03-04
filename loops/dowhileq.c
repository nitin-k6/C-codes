#include <stdio.h>

int main()
{
    int i = 0;
    int n;
     printf("enter the value of n\n");
        scanf("%d", &n);
    do
    { 
        printf("%d\n" , i+1);
       
        i++;
 } while (i < n);  // or to print till 4 we could have done <= here in this  //
    return 0;
}