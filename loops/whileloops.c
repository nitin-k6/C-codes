#include <stdio.h>

int main()
{
    int a;
    printf("enter an number\n");
    scanf("%d", &a);
    a=5;
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }
    return 0;
}