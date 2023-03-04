#include <stdio.h>

int main()
{

    for (int i = 0; i < 100; i++)
    {
        printf("the vakue is %d\n", i);
        if (i == 50)
        {
            break;
        }
    }

    return 0;
}