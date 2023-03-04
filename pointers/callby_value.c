#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 5;
    int b = 6;
    printf("The value of the sum is %d\n", sum(a, b));
    printf("The value of the sum is %d and %d\n", a, b); // value of function after call

    return 0;
}
#include <stdio.h>
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c; // or directly return a + b;
}