#include <stdio.h>
/*
Print multiplication table of a number entered by the user in pretty form

Example:

Input
Enter the number you want multiplication table of:
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
6 X 10 = 60

*/
int main()
{
    int n;
    printf("Multiplication table of what number you looking for:  ");
    scanf("%d", &n);
    printf("the multiplication table of %d is:\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}
