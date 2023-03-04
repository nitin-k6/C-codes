#include <stdio.h>
int main()
{
    int n;
    printf("Enter an number\n");
    scanf("%d", &n); // if we want we can declare i before for and in for don't use int
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, i * n); // n , i position matters when i was placed first then it was 1.2.3...10 * input and when n was placed first then it was input * 1.2.3....10 and second thing i*n is same thing as n*i.
    }
    return 0;
}