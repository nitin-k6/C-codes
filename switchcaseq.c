#include <stdio.h>

int main()
{
     int marks;
    printf("Enter your marks (50-100)\n");
    scanf("%d", &marks);

    switch (marks/10)
    {
    case 1:
        printf("you grade is A:\n ");
        break;
    case 2:
        printf("you grade is B:\n");
        break;
    case 3:
        printf("you grade is C:\n");
        break;
    case 4:
        printf("you grade is D:\n");
        break;
    case 5:
        printf("you grade is F:\n ");
        break;

    default :
        printf(" No grades\n");
         break;
    }
    return 0;
}