#include <stdio.h>

int main()
{
    int i = 9;

    switch (i)
    {
    case 1:
        printf("Value is 7\n");
        break;

    case 2:
        printf("Value is 8\n");
        break;

    case 3:
        printf("Value is 9\n");
        break;

    default:
        printf("Value is not present\n");
        break;
    }

    int age, marks;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45");
            break;

        default:
            printf("your marks are not 45");
        }
        break;

    case 13:
        printf("The age is 13\n");
        break;

    case 23:
        printf("The age is 23\n");
        break;

    default:
        printf("Age is not 3, 13 or 23\n");
    }

    return 0;
}