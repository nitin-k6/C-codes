#include <stdio.h>

int main()
{
    int total;
    int physics, chemistry, maths;
   

    printf(" Enter physics marks\n");
    scanf("%d", &physics);

    printf(" Enter chemistry marks\n");
    scanf("%d", &chemistry);

    printf(" Enter maths marks\n");
    scanf("%d", &maths);

    total = (physics + chemistry + maths);

    if (total < 40 || (physics < 33, chemistry < 33, maths < 33))
    {
        printf("  your are failed , total ");
    }
    else
    {
        printf(" your are passed, total  ");
    }
    return 0;
}