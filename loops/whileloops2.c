#include <stdio.h>

int main()
{
    int i = 0;
    printf("Enter an number\n");
    scanf("%d", &i);
    while (i >= 10 && i <= 20)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}