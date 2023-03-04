#include <stdio.h>

int main()
{
    int marks;

    printf("Enter The Mark: (0-100) ");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 1:
        printf("Your Grade is: A");
        break;
    case 2:
        printf(" Your Grade is: B");
        break;
    case 3:
        printf(" Your Grade is: C");
        break;
    case 4:
        printf(" Your Grade is: D");
        break;
    case 5:
        printf(" Your Grade is: E");
        break;
    case 6:
           printf(" Your Grade is: G");
           break;
       default :
           printf(" You Grade is: F or Fail\n");
    break;
    }

    return 0;
}
