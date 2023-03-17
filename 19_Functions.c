#include <stdio.h>

// Argument and Return Value
int sum(int a, int b);

// No Argument and No Return Value
void Star_pattern()
{
    int a;
    printf("Enter how many stars(*) you want : \n"); /* In this both declaration and definition of function are done together.*/
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("*");
    }
}

// Argument and No Return Value
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

// No Argument and Return Value
int takenumber()
{
    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}

int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    // c = sum(a, b);
    // printstar(7);
    c = takenumber();
    // printf("The sum is %d \n", c);
    printf("The number entered is %d \n", c);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
