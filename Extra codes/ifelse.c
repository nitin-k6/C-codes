#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age\n");
    scanf("%d", &age);

    if (age >= 80)
    {
        printf("You are above 80 , you cannot drive");
    }
    else
    {
        printf("You can drive ");
    }
return 0;
}