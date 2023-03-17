#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number less than 10: ");
    scanf("%d", &num);
    if (num <= 10)
    {
        printf("Number is less than 10\n");
    }
    else
    {
        printf("Number is greater than 10\n");
    }

    int a;
    printf("Enter either 0 or 1: ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("Number 1 is entered!\n");
    }
    else
    {
        if (a == 0)
        {
            printf("Number 0 is entered\n");
        }
        else
        {
            printf("Wrong Input\n");
        }
    }
    return 0;
}
