#include <stdio.h>

int main()
{
    int age;
    int vipPass=1;

    printf("Enter your age\n");
    scanf("%d", &age);

    if (age <= 70 && age >= 18 || vipPass==1 )
    {
        printf("You are below 70 and above 18 , you can drive");
    }
    else
    {
        printf("You cannot drive ");
    }
return 0;
}