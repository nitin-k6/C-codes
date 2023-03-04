#include <stdio.h>

int main()
{
    int i = 0;
    printf("Enter an number\n");
    scanf("%d", &i);
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The value is %d\n", i);
        }
          i++; // i++ = i+1
    }
    return 0;
}