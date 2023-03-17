#include <stdio.h>

int main()
{

    int a, b;
    a = 2;
    b = 3;

    printf("a & b = %d\n", a & b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);

    int c = 2;
    int d = 2;
    printf("a == b = %d\n", c == d);

    int e = 1;
    int f = 0;
    printf("a or b = %d\n", e || f);

    return 0;
}
